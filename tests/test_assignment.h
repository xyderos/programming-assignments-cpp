#include <cppunit/extensions/HelperMacros.h>

class test_assignment : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_assignment);
	CPPUNIT_TEST(test_remove_nth_node_from_long_list);
	CPPUNIT_TEST(test_remove_nth_node_from_single_list);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp() override { }
	void tearDown() override { }

    protected:
	void test_remove_nth_node_from_long_list();
	void test_remove_nth_node_from_single_list();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_assignment);
