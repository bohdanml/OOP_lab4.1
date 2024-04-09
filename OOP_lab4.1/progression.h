#pragma once

class Progression {
public:
    virtual double element_progression(int n) = 0;
    virtual ~Progression() {}
};

class ArithmeticProgression : public Progression {
private:
    double first_term;
    double common_difference;

public:
    ArithmeticProgression(double first_term, double common_difference);
    double element_progression(int n) override;
};

class GeometricProgression : public Progression {
private:
    double first_term;
    double common_ratio;

public:
    GeometricProgression(double first_term, double common_ratio);
    double element_progression(int n) override;
};