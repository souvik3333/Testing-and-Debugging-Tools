#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include <bits/stdc++.h>
int function1(int n,int a){
	if(n>=0){
        function1(n-1,a);
        int pp=a/n;
        int qq[10];
        qq[10]=10;
        return pp;

	}
    return 1000;
}
int fun(){
    return 1;
}
BOOST_AUTO_TEST_SUITE(SUitname)
BOOST_AUTO_TEST_CASE(subtest1){
    BOOST_TEST_CHECKPOINT("Caused death!");
    function1(10,10);
}
BOOST_AUTO_TEST_SUITE_END()