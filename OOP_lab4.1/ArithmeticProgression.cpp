#include "ArithmeticProgression.h"

ArithmeticProgression::ArithmeticProgression(double first_term, double common_difference)
    : first_term(first_term), common_difference(common_difference) {}

double ArithmeticProgression::element_progression(int n) {
    return first_term + (n - 1) * common_difference;
}