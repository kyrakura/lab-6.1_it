#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 6.2/lab 6.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestMethod1)
        {
            const int N = 25;
            int a[N]{};
            int Low = -11;
            int High = 13;
            Create(a, N, -11, 13);
            Assert::AreEqual(1, MinMax(a, N), 0.0001);
        }
    };
}
