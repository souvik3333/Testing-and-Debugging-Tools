#include<bits/stdc++.h>
#include<gtest/gtest.h>
using namespace std;
TEST(mytest,test1){
    stack <int> st;
    st.push(1);
    EXPECT_ANY_THROW(st.pop());
    // EXPECT_NO_THROW(st.pop());
    // EXPECT_THROW(st.pop(),out_of_range);
    cout<<"continued";
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}