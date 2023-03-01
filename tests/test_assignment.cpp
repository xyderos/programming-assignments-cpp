#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::first_test()
{

	auto result = non_decreasing({ 4, 2, 3 });

	CPPUNIT_ASSERT(result);
}

void
test_assignment::second_test()
{
	auto result = non_decreasing({ 4, 2, 1 });

	CPPUNIT_ASSERT(!result);
}
