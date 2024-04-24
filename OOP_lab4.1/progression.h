#pragma once
#include <string>
#include <typeinfo>

class Progression {
protected:
    double first_term;
    double common_difference;

public:
    Progression(double first_term, double common_difference);
    virtual double element_progression(int n) = 0;
    virtual std::string type() const = 0;
    virtual ~Progression() {}
};