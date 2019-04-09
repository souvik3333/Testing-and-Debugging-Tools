#include<iostream>
#include<gtest/gtest.h>
using namespace std;
TEST(TestName,Subtest_1){
    // ASSERT_TRUE(1==1); // fatel execution stops
    // ASSERT_EQ(1,2);     //fatal
    EXPECT_EQ(1,2);     //non fatel
    cout<<"Its continued"<<endl;
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}