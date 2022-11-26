#include "pch.h"
#include "CppUnitTest.h"
#include "../лаба 8.1.char/лаба 8.1.char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace юніттест81char
{
	TEST_CLASS(юніттест81char)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* s = "while";
			char* cs = "is";
			int expected = Include(s, cs);
			Assert::AreEqual(expected, 0);
		}
	};
}
