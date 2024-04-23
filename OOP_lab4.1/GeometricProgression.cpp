#include "GeometricProgression.h"

#include <cmath>
#include <typeinfo> 

GeometricProgression::GeometricProgression(double first_term, double common_ratio)
    : first_term(first_term), common_ratio(common_ratio) {}

double GeometricProgression::element_progression(int n) {
    return first_term * pow(common_ratio, n - 1);
}

std::string GeometricProgression::type() const {
    return typeid(*this).name();
}