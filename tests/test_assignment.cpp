#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::first_test()
{
	auto result = my_atoi("42");

	CPPUNIT_ASSERT_EQUAL(42, result);
}

void
test_assignment::second_test()
{
	auto result = my_atoi("   -42");

	CPPUNIT_ASSERT_EQUAL(-42, result);
}

void
test_assignment::third_test()
{
	auto result = my_atoi("4193 with words");

	CPPUNIT_ASSERT_EQUAL(4193, result);
}
