#include <iostream>
#include <string>
#include <vector>
#include <limits>
#include <algorithm>
#include "data.hpp"

int main()
{
    auto inputs = data::get_data();
    std::cout << inputs.size() << std::endl;
}
