#pragma once
#include "Progression.h"

class GeometricProgression : public Progression {
public:
    GeometricProgression(double first_term, double common_difference);
    double element_progression(int n) override;
    std::string type() const override;
};