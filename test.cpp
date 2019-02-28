#ifdef  TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE(test_case1)
{
	BOOST_TEST_CHECK(number_It_20_to_string(2) == string("два"));
	BOOST_TEST_CHECK(number_It_20_to_string(1) == string("один"));
	BOOST_TEST_CHECK(number_It_20_to_string(43) == string("сорок три"));
	//using namespace std;
//cout << number_It_20_to_string(56);
	BOOST_TEST_CHECK(number_It_20_to_string(56) == string("п€тьдес€т шесть"));
	BOOST_TEST_CHECK(number_It_20_to_string(726) == string("семьсот двадцать шесть"));
	BOOST_TEST_CHECK(number_It_20_to_string(556) == string("п€тьсот п€тьдес€т шесть"));
	BOOST_TEST_CHECK(number_It_20_to_string(1056) == string("тыс€ча п€тьдес€т шесть"));
	BOOST_TEST_CHECK(number_It_20_to_string(1556) == string("тыс€ча п€тьсот п€тьдес€т шесть"));
	
}

#endif