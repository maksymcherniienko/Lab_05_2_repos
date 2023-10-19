#include "pch.h"
#include "CppUnitTest.h"
#include "F:\lpnu\labi\Lab_05_2\Lab_05_2\Lab_05_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double R, n, x, a;
			n = 1;
			x = 0;
			a = 1;
			R = (2 * n * x) / (2 * n + 1);
			a = A(x, n, a);
			Assert::AreEqual(R, a, 0.00001);
		}
	};
}
