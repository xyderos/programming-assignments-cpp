#include <cppunit/extensions/HelperMacros.h>

class test_assignment : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_assignment);
	CPPUNIT_TEST(test_longest_sub_no_reps_simple);
	CPPUNIT_TEST(test_longest_sub_no_reps_simple_also);
	CPPUNIT_TEST(test_longest_sub_no_reps_sequence);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp() override { }
	void tearDown() override { }

    protected:
	void test_longest_sub_no_reps_simple();
	void test_longest_sub_no_reps_simple_also();
	void test_longest_sub_no_reps_sequence();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_assignment);
