#include "CppUnitTest.h"
#include "pch.h"
#include "..\\OOP_lab4.1\main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ProgressionUnitTest
{
    TEST_CLASS(ProgressionUnitTest)
    {
    public:

        TEST_METHOD(TestArithmeticProgression)
        {
            ArithmeticProgression ap(4, 6);
            Assert::AreEqual(4.0, ap.element_progression(1));
            Assert::AreEqual(10.0, ap.element_progression(2));
            Assert::AreEqual(16.0, ap.element_progression(3));
            Assert::AreEqual(22.0, ap.element_progression(4));
            Assert::AreEqual(28.0, ap.element_progression(5));
        }

        TEST_METHOD(TestGeometricProgression)
        {
            GeometricProgression gp(1, 2);
            Assert::AreEqual(1.0, gp.element_progression(1));
            Assert::AreEqual(2.0, gp.element_progression(2));
            Assert::AreEqual(4.0, gp.element_progression(3));
            Assert::AreEqual(8.0, gp.element_progression(4));
            Assert::AreEqual(16.0, gp.element_progression(5));
        }
    };
}