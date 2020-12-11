#include "stdafx.h"
#include "CppUnitTest.h"
#include "../summarytest/mathfuncs.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(addTest)
		{
			//TODO: 在此输入测试代码
			int a = add(1, 2);
			Assert::AreEqual(a, 3);
		}

		TEST_METHOD(subTest)
		{
			// TODO: 在此输入测试代码
			int b = sub(2, 1);
			Assert::AreEqual(b, 1);
		}

		TEST_METHOD(mulTest)
		{
			// TODO: 在此输入测试代码
			int c = mul(1, 2);
			Assert::AreEqual(c, 2);
		}

		TEST_METHOD(divsTest)
		{
			// TODO: 在此输入测试代码
			int d = divs(2, 1);
			Assert::AreEqual(d, 2);
		}

	};
}