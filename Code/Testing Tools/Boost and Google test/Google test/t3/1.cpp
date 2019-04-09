#include<iostream>
#include<gtest/gtest.h>
using namespace std;
class cl_name{
    string str;
    public:
        cl_name(string str){
            this->str=str;
        }
        string getstr(){
            return str;
        }
};
TEST(TestName,Subtest_1){
    //Arrange
    cl_name name("name");
    //act
    string val=name.getstr();
    // assert
    ASSERT_STREQ(val.c_str(),"name");
    cout<<"cont"<<endl;
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}