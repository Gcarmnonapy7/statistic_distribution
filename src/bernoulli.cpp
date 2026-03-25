#include "bernoulli.hpp"
#include <stdexcept>
#include <random>


Bernoulli::Bernoulli(){
    p = 0.0; // Default value, can be set using fit method
}

void Bernoulli::fit(const std::vector<int>& data) {
    if (data.empty()) {
        throw std::invalid_argument("Data cannot be empty");
    }
    
    int count_ones = 0;
    for (int value : data) {
        if (value != 0 && value != 1) {
            throw std::invalid_argument("Data must be binary (0 or 1)");
        }
        count_ones += value;
    }
    
    p = static_cast<double>(count_ones) / data.size();
}

double Bernoulli::pmf(int x) const {
    if (x != 0 && x != 1) {
        throw std::invalid_argument("Input must be binary (0 or 1)");
    }
    return x == 1 ? p : (1 - p);
}

double Bernoulli::cdf(int x) const {
    if (x < 0) {
        return 0.0;
    }
    if (x >= 1) {
        return 1.0;
    }
    return 1 - p;
}

int Bernoulli::sample() const {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::bernoulli_distribution dis(p);
    return dis(gen);
}

double Bernoulli::get_p() const {
    return p;
}