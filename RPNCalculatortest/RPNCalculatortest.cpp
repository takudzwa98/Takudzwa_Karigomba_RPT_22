#include "pch.h"
#include "CppUnitTest.h"
#include "../Takudzwa_Karigomba_RPT_22/RPNCalculator.h"
#include "../Takudzwa_Karigomba_RPT_22/RPNCalculator.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPNCalculatortest
{
	TEST_CLASS(RPNCalculatortest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			RPNCalculator<double> calculator;
			calculator.push(5);
			calculator.push(4);
			calculator.add();
			Assert::AreEqual(9.0, calculator.value());
		}
	};
}
