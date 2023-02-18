#include <cppunit/extensions/HelperMacros.h>

class test_assignment : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_assignment);
	CPPUNIT_TEST(test_find_min_sorted_array_case);
	CPPUNIT_TEST(test_find_min_sorted_array_case_duplicates);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp() override { }
	void tearDown() override { }

    protected:
	void test_find_min_sorted_array_case();
	void test_find_min_sorted_array_case_duplicates();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_assignment);
