#include<iostream>
#include<gtest/gtest.h>
using namespace std;
void dfun(){
    std::cerr<<"Bad things happend";
    // exit(1);// exit(0) is not death
    int d_by_zero=1/0;
}
TEST(d_DeathTest,test1){ // death test need to run before other test
    EXPECT_DEATH(dfun(),"Bad.*");
    // 
}
TEST(mytest,test1){
    EXPECT_EQ(1,1);
    cout<<"continued";
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}