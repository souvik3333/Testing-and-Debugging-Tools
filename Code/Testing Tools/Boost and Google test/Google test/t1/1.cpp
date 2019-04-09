#include<iostream>
#include<gtest/gtest.h>
using namespace std;
TEST(TestName,Subtest_1){
    ASSERT_TRUE(1==1);
}
TEST(TestName,Subtest_2){
    ASSERT_FALSE(1==1);
}
TEST(TestNam1,Subtest_2){
    ASSERT_FALSE(1==1);
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}