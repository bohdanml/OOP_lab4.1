#pragma once

class Progression {
public:
    virtual double element_progression(int n) = 0;
    virtual ~Progression() {}
};