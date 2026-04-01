#ifndef EXPECTED_VALUE_HH
#define EXPECTED_VALUE_HH
#include <vector>
#include <functional>

class ExpectedValue {
    
    public:
    // Calculate the expected value of a dataset

    const std::vector<double>& values;
    const std::vector<double>& probabilities;
    std::function<double(double)> f; // Function to apply to the values

    static double calculate(const std::vector<double>& values, const std::vector<double>& probabilities, std::function<double(double)> f);

    double get_expected_value() const {
        return calculate(values, probabilities, f);
    }
};

#endif // EXPECTED_VALUE_HH