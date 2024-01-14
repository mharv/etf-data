// include lock
#pragma once

// include libraries
#include <vector>

namespace data
{
    std::vector<float> get_data();
    float get_average(const std::vector<float> &v);
}