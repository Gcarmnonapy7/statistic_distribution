#ifndef BERNOULLI_HH
#define BERNOULLI_HH
#include <vector>

class Bernoulli {
    private: 
    double p;
    public:
    
    Bernoulli();
   
    // Fit the Bernoulli distribution to the data
    void fit(const std::vector<int>& data);
    
    // Probability Mass Function
    double pmf(int x) const;

    // Cumulative Distribution Function
    double cdf(int x) const;

    // Generate a random sample from the Bernoulli distribution
    int sample() const;

    // Get the parameter p
    double get_p() const;


};
#endif