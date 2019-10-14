#include "stdafx.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/Calculator.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorUnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Calculator* calc = new Calculator();
			string ret = calc->Solve("11+22");
			Assert::AreEqual(ret, (string)"11+22=33");
			// TODO: 在此输入测试代码
		}
		TEST_METHOD(TestMethod2)
		{
			Calculator* calc = new Calculator();
			string ret1 = calc->Solve("11+22-1");
			Assert::AreEqual(ret1, (string)"11+22-1=32");
		}
		TEST_METHOD(TestMethod3)
		{
			Calculator* calc = new Calculator();
			string ret2 = calc->Solve("11*15");
			Assert::AreEqual(ret2, (string)"11*15=165");
		}
		TEST_METHOD(TestMethod4)
		{
			Calculator* calc = new Calculator();
			string ret3 = calc->Solve("3+10+4-16");
			Assert::AreEqual(ret3, (string)"3+10+4-16=1");
		}
		TEST_METHOD(TestMethod5)
		{
			Calculator* calc = new Calculator();
			string ret4 = calc->Solve("15/5+3-2");
			Assert::AreEqual(ret4, (string)"15/5+3-2=4");
		}
	};
}