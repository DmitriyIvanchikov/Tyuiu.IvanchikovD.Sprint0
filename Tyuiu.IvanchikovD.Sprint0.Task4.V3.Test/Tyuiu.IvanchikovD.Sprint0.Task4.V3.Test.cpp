#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.IvanchikovD.Sprint0.Task4.V3.Lib/Tyuiu.IvanchikovD.Sprint0.Task4.V3.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint0Task4* service = new Service1();
			double a = 15;
			double b = 2;
			double c = 4;
			double d = 8;
			double f;

			f = service->Calculate(a, b, c, d);

			Assert::AreEqual(9.8, f); 

		}
	};
}