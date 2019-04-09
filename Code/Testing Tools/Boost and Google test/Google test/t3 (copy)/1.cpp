#include<bits/stdc++.h>
#include<gtest/gtest.h>
using namespace std;
vector<int> nSort(vector<int> arr){
    for(long i=0;i<10;i++){
        int index=rand()%arr.size();
        int index2=(index+1)%arr.size();
        if(index>index2 && arr[index]<arr[index2]) swap(arr[index2],arr[index]);
        else if(index<index2 && arr[index]>arr[index2]) swap(arr[index2],arr[index]);
    }
    return arr;
}
TEST(TestSuite,one){
    vector<int> arr={3,2,5,2,5,1,5,7,29,0};
    vector<int> rarr=nSort(arr);
    {
        SCOPED_TRACE("size_check_fail");
        ASSERT_EQ(arr.size(),rarr.size());
    }
    {
        SCOPED_TRACE("Not same data in array");
        unordered_map<int, int> mp;
        for(auto itr:rarr){
            mp[itr]++;
        }
        for(auto itr:arr){
            ASSERT_NE(mp[itr],0);
            mp[itr]--;
        }
    }
    {
        SCOPED_TRACE("Not sorted");
        for(long i=0;i<rarr.size()-1;i++){
            ASSERT_LE(rarr[i],rarr[i+1]);
        }
    }
}
int main(int argc,char **argv){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}