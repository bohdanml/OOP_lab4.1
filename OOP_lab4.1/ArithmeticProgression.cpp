#include "ArithmeticProgression.h"

ArithmeticProgression::ArithmeticProgression(double first_term, double common_difference)
    : Progression(first_term, common_difference) {}

double ArithmeticProgression::element_progression(int n) {
    return first_term + (n - 1) * common_difference;
}

std::string ArithmeticProgression::type() const {
    return typeid(*this).name();
}