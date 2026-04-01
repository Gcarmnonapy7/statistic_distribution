#ifndef EXPECTED_VALUE_HH
#define EXPECTED_VALUE_HH
#include <vector>
#include <functional>

class ExpectedValue {
    // This class calculates the expected value of a dataset given a set of values, their corresponding probabilities, and a function to apply to the values.
    
    private:
    const std::vector<double>& values;
    const std::vector<double>& probabilities;
    std::function<double(double)> f; // Function to apply to the values

    public:
    // Calculate the expected value of a dataset
    
    ExpectedValue();

    
    static double calculate(const std::vector<double>& values, const std::vector<double>& probabilities, std::function<double(double)> f);
};

#endif // EXPECTED_VALUE_HH