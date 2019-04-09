#include<bits/stdc++.h>
#include<gtest/gtest.h>
using namespace std;

int function1(){
	exit(0);
}
TEST(a2_DeathTest,test1){
    // int a=10;
    ASSERT_ANY_THROW(function1);
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}