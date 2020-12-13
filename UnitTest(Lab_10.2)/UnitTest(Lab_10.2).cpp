#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10.2/Lab_10.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab102
{
	TEST_CLASS(UnitTestLab102)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[101] = "E:\\Моя папка. Навчання\\Student [IK-11] [Дорожовець]\\Lab_10.2\\Lab_10.2\\test.txt";

			int lichilnuk = kil_sliv(fname);

			Assert::AreEqual(lichilnuk, 5);
		}
	};
}
