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
			//TODO: �ڴ�������Դ���
			int a = add(1, 2);
			Assert::AreEqual(a, 3);
		}

		TEST_METHOD(subTest)
		{
			// TODO: �ڴ�������Դ���
			int b = sub(2, 1);
			Assert::AreEqual(b, 1);
		}

		TEST_METHOD(mulTest)
		{
			// TODO: �ڴ�������Դ���
			int c = mul(1, 2);
			Assert::AreEqual(c, 2);
		}

		TEST_METHOD(divsTest)
		{
			// TODO: �ڴ�������Դ���
			int d = divs(2, 1);
			Assert::AreEqual(d, 2);
		}

	};
}