#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_longest_palindromic_case_1()
{
	auto result = palindrome("babad");

	std::string expected("bab");

	CPPUNIT_ASSERT(expected == result);
}

void
test_assignment::test_longest_palindromic_case_2()
{
	auto result = palindrome("cbbd");

	std::string expected("bb");

	CPPUNIT_ASSERT(expected == result);
}
