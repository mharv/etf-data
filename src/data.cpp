#include "data.hpp"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

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