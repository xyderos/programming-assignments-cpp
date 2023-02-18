#include <cppunit/extensions/HelperMacros.h>

class test_assignment : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_assignment);
	CPPUNIT_TEST(test_combinations_with_two_inputs);
	CPPUNIT_TEST(test_combinations_with_single_input);
	CPPUNIT_TEST(test_combinations_with_no_input);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp() override { }
	void tearDown() override { }

    protected:
	void test_combinations_with_two_inputs();
	void test_combinations_with_single_input();
	void test_combinations_with_no_input();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_assignment);
