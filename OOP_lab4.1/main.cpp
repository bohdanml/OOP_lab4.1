#include <iostream>
#include "ArithmeticProgression.h"
#include "GeometricProgression.h"

int main() {
    Progression* progressions[2];

    progressions[0] = new ArithmeticProgression(4, 6);
    progressions[1] = new GeometricProgression(1, 2);

    for (int i = 0; i < 2; ++i) {
        std::cout << "Progression type: ";
        if (dynamic_cast<ArithmeticProgression*>(progressions[i])) {
            std::cout << "Arithmetic" << std::endl;
        }
        else if (dynamic_cast<GeometricProgression*>(progressions[i])) {
            std::cout << "Geometric" << std::endl;
        }
        for (int j = 0; j < 5; ++j) {
            std::cout << "Element " << j << ": " << progressions[i]->element_progression(j) << std::endl;
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete progressions[i];
    }

    return 0;
}
