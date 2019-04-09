#include<bits/stdc++.h>
#include<gtest/gtest.h>
using namespace std;

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
TEST(a2_DeathTest,test1){
    int a=10;
    EXPECT_DEATH(function1(10,a),"");
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}