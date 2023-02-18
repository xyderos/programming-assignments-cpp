#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_combinations_with_two_inputs()
{
	auto result = combinations("23");

	std::set<std::string> extected { "ad", "ae", "af", "bd", "be", "bf",
		"cd", "ce", "cf" };

	CPPUNIT_ASSERT(extected == result);
}

void
test_assignment::test_combinations_with_single_input()
{
	auto result = combinations("");

	std::set<std::string> extected {};

	CPPUNIT_ASSERT(extected == result);
}

void
test_assignment::test_combinations_with_no_input()
{
	auto result = combinations("2");

	std::set<std::string> extected { "a", "b", "c" };

	CPPUNIT_ASSERT(extected == result);
}
