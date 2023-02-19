#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::test_longest_sub_no_reps_simple()
{
	auto result = length("abcabcbb");

	CPPUNIT_ASSERT_EQUAL(3, result);
}

void
test_assignment::test_longest_sub_no_reps_simple_also()
{
	auto result = length("bbbbb");

	CPPUNIT_ASSERT_EQUAL(1, result);
}

void
test_assignment::test_longest_sub_no_reps_sequence()
{
	auto result = length("pwwkew");

	CPPUNIT_ASSERT_EQUAL(3, result);
}
