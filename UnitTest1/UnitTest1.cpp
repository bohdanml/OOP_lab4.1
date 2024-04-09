#include "pch.h"
#include "CppUnitTest.h"

#include"..//OOP_lab4.1/progression.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
    public:

        TEST_METHOD(TestElementProgression)
        {
            // Arrange
            GeometricProgression geomProg(2, 2);

            // Act
            double result = geomProg.element_progression(3);

            // Assert
            Assert::AreEqual(16.0, result);
        }
    };
}