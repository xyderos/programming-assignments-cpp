#include <cppunit/TestAssert.h>

#include "../src/assignment.h"
#include "test_assignment.h"

void
test_assignment::first_test()
{
	CPPUNIT_ASSERT(!match("aa", "a"));
}

void
test_assignment::second_test()
{
	CPPUNIT_ASSERT(match("aa", "a*"));
}

void
test_assignment::third_test()
{
	CPPUNIT_ASSERT(match("ab", ".*"));
}
