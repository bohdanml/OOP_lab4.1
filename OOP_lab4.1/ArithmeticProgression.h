#pragma once
#include "Progression.h"

class ArithmeticProgression : public Progression {
public:
    ArithmeticProgression(double first_term, double common_difference);
    double element_progression(int n) override;
    std::string type() const override;
};