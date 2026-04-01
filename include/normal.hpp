#ifndef NORMAL_HH
#define NORMAL_HH
#include <vector>

class Normal {
    private:
    double mean;
    double std;

    public:

    Normal();

    double pmf(double x) const;

    double cdf(double x) const;

    double sample() const;

    double get_mean() const;

    double get_std() const;


};

#endif