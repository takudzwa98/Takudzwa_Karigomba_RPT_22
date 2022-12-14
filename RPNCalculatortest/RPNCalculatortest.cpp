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
		
		TEST_METHOD(Test_Add)
		{
			RPNCalculator<double> calculator;
			calculator.push(5);
			calculator.push(4);
			calculator.add();
			Assert::AreEqual(9.0, calculator.value());
		}
		TEST_METHOD(Test_Add2)
		{
			//testing if the value is not equal to the answer should fail
			RPNCalculator<double> calculator;
			calculator.push(5);
			calculator.push(4);
			calculator.add();
			Assert::AreNotEqual(8.0, calculator.value());
		}
		TEST_METHOD(Test_subtract)
		{
			RPNCalculator<double> calculator;
			calculator.push(2.0);
			calculator.push(9.0);
			calculator.subtract();
			Assert::AreEqual(-7.0, calculator.value());
		}
		TEST_METHOD(Test_multiply)
		{
			RPNCalculator<double> calculator;
			calculator.push(5);
			calculator.push(5);
			calculator.multiply();
			Assert::AreEqual(25.0, calculator.value());
		}
		TEST_METHOD(Test_divide)
		{
			RPNCalculator<double> calculator;
			calculator.push(100);
			calculator.push(20);
			calculator.divide();
			Assert::AreEqual(5.0, calculator.value());
		}
		TEST_METHOD(Test_square)
		{
			RPNCalculator<double> calculator;
			calculator.push(6);
			calculator.square();
			Assert::AreEqual(36.0, calculator.value());
		}
		TEST_METHOD(Test_negate)
		{
			RPNCalculator<double> calculator;
			calculator.push(18);
			calculator.negate();
			Assert::AreEqual(-18.0, calculator.value());
		}

		TEST_METHOD(Test_pop)
		{
			RPNCalculator<int> calculator;
			calculator.push(5);
			calculator.push(0);
			calculator.push(3);
			int top = calculator.pop();
			Assert::AreEqual(3, top);

		}


		TEST_METHOD(Test_clear)
		{
			//Creating a list then push and clear. calculator should be empty
			RPNCalculator<int> calculator;
			for (int i = 0; i < 7; i++) {
				calculator.push(i) ;
			}

			calculator.clear();
			Assert::IsTrue(calculator.isEmpty());
		}
		TEST_METHOD(Test_clear2)
		{
			//Creating a list then push and clear. calculator should `fail
			RPNCalculator<int> calculator;
			for (int i = 0; i < 7; i++) {
				calculator.push(i);
			}

			calculator.clear();
			Assert::IsFalse(calculator.isEmpty());
		}

		TEST_METHOD(Test_empty)
		{
			//empty so should pass no values pushed
			RPNCalculator<double> calculator;
			Assert::IsTrue(calculator.isEmpty());
		}
	};
}
