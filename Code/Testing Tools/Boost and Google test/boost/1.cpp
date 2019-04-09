#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include <bits/stdc++.h>
using namespace std;
int sub(int i,int j){
    return i-j;
}


int function2(int n,int a){
    int pp=0;// function1(n,a);
    int qq[10];
    qq[10]=10;
    return pp;
}
BOOST_AUTO_TEST_SUITE(SUitname)
BOOST_AUTO_TEST_CASE(subtest){
    BOOST_CHECK(sub(3,3)==10);
}
BOOST_AUTO_TEST_CASE( force_division_by_zero )
{
    // BOOST_CHECK( false );

    // unit test framework can catch operating system signals
    BOOST_TEST_CHECKPOINT("About to force division by zero!");
    int i = 1, j = 0;

    // reports 'unknown location(0): fatal error in "force_division_by_zero": integer divide by zero'
    i = i / j;
}

BOOST_AUTO_TEST_CASE( mooo )
{
    // BOOST_CHECK( false );

    // unit test framework can catch operating system signals
    BOOST_TEST_CHECKPOINT("About moozzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz force division by zero!");
    // int i[10];

    // reports 'unknown location(0): fatal error in "force_division_by_zero": integer divide by zero'
    function2(10,10);
}

BOOST_AUTO_TEST_SUITE_END()