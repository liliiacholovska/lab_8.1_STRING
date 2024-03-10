#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab8.1(4)/lab8.1(4).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(TestFindThirdDotIndex)
        {
            string str1 = "++-+!!!!!!,,...";
            string str2 = "...";
            string str3 = "abc";

            Assert::AreEqual(14, FindThirdDotIndex("++-+!!!!!!,,..."));
            Assert::AreEqual(2, FindThirdDotIndex("..."));
            Assert::AreEqual(-1, FindThirdDotIndex("abc"));
        }

        TEST_METHOD(TestReplaceEveryFourthCharWithDot)
        {
            string str1 = "abcdefghijklmnopqrstuvwxyz";
            string str2 = "abc";

            string modifiedStr1 = ReplaceEveryFourthCharWithDot(str1);
            string modifiedStr2 = ReplaceEveryFourthCharWithDot(str2);

            string expectedResult1 = "abc.efg.ijk.mno.qrs.uvw.yz";
            string expectedResult2 = "abc";

            Assert::AreEqual(expectedResult1, modifiedStr1);
            Assert::AreEqual(expectedResult2, modifiedStr2);
        }

	};
}
