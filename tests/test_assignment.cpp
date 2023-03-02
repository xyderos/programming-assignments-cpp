#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::first_test()
{
	auto result = median({ 1, 3 }, { 2 });

	CPPUNIT_ASSERT_EQUAL(result, 2.0);
}

void
test_assignment::second_test()
{
	auto result = median({ 1, 2 }, { 3, 4 });

	CPPUNIT_ASSERT_EQUAL(result, 2.5);
}
