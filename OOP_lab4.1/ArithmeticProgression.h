#pragma once
#include "Progression.h"

class ArithmeticProgression : public Progression {
private:
    double first_term;
    double common_difference;

public:
    ArithmeticProgression(double first_term, double common_difference);
    double element_progression(int n) override;
};
