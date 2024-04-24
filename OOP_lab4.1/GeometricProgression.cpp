#include "GeometricProgression.h"
#include <cmath>

GeometricProgression::GeometricProgression(double first_term, double common_difference)
    : Progression(first_term, common_difference) {}

double GeometricProgression::element_progression(int n) {
    return first_term * pow(common_difference, n - 1);
}

std::string GeometricProgression::type() const {
    return typeid(*this).name();
}