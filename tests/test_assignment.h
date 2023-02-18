#include <cppunit/extensions/HelperMacros.h>

class test_assignment : public CPPUNIT_NS::TestCase {

    private:
	CPPUNIT_TEST_SUITE(test_assignment);
	CPPUNIT_TEST(test_anagrams_with_valid_input);
	CPPUNIT_TEST(test_anagrams_with_empty_input);
	CPPUNIT_TEST(test_anagrams_with_single_input);
	CPPUNIT_TEST_SUITE_END();

    public:
	void setUp() override { }
	void tearDown() override { }

    protected:
	void test_anagrams_with_valid_input();
	void test_anagrams_with_empty_input();
	void test_anagrams_with_single_input();
};

CPPUNIT_TEST_SUITE_REGISTRATION(test_assignment);
