#ifdef  TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE(test_case1)
{
	BOOST_TEST_CHECK(number_It_20_to_string(1) == string("один"));
	BOOST_TEST_CHECK(number_It_20_to_string(2) == string("два"));
}

#endif