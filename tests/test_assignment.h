#include <cppunit/extensions/HelperMacros.h>

class test_assignment : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_assignment);
	CPPUNIT_TEST(test_quantrant_should_produce_valid_result);

	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp() override { }
	void tearDown() override { }

    protected:
	void test_quantrant_should_produce_valid_result();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_assignment);
