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

        char c = istrm.get();

        while (istrm.good())
        {
            std::string fs(1, c);
            inputs.push_back(std::stof(fs));
            c = istrm.get();
        }

        istrm.close();
    }
    
    return inputs;
}