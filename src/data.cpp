#include "data.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

using namespace data;

std::vector<float> data::get_data()
{
    std::string filename = "../scripts/data.txt";

    std::vector<float> inputs;

    // open file for reading
    std::ifstream istrm;
    istrm.open(filename, std::ifstream::in);
    if (!istrm.is_open())
        std::cout << "failed to open " << filename << '\n';
    else
    {
        std::string line;
        while (std::getline(istrm, line))
        {
            std::cout << line << std::endl;
            inputs.push_back(std::stof(line));
        }
        istrm.close();
    }

    return inputs;
}

float data::get_average(std::vector<float> const& v) {
    if(v.empty()){
        return 0;
    }

    auto const count = static_cast<float>(v.size());
    float sum = 0;
    for (auto& n : v) {
        sum = sum + n;
    }
    return sum / count;
}