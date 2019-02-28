#ifdef  TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE(test_case1)
{
	BOOST_TEST_CHECK(number_It_20_to_string(2) == string("���"));
	BOOST_TEST_CHECK(number_It_20_to_string(1) == string("����"));
	BOOST_TEST_CHECK(number_It_20_to_string(43) == string("����� ���"));
	//using namespace std;
//cout << number_It_20_to_string(56);
	BOOST_TEST_CHECK(number_It_20_to_string(56) == string("��������� �����"));
	BOOST_TEST_CHECK(number_It_20_to_string(726) == string("������� �������� �����"));
	BOOST_TEST_CHECK(number_It_20_to_string(556) == string("������� ��������� �����"));
	BOOST_TEST_CHECK(number_It_20_to_string(1056) == string("������ ��������� �����"));
	BOOST_TEST_CHECK(number_It_20_to_string(1556) == string("������ ������� ��������� �����"));
	
}

#endif