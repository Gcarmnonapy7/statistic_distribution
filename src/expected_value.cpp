#include "expected_value.hpp"
#include <stdexcept>

double ExpectedValue::calculate(
    const std::vector<double>& values,
    const std::vector<double>& probabilities,
    std::function<double(double)> f)
{

    if(values.size() != probabilities.size())
        throw std::invalid_argument(
            "Values and probabilities must have the same size"
        );

    double expected_value = 0.0;

    for(size_t i = 0; i < values.size(); ++i)
        expected_value += f(values[i]) * probabilities[i];

    return expected_value;
}
