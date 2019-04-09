#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
#include <bits/stdc++.h>
using namespace std;
vector<int> nSort(vector<int> arr){
    // sort(arr.begin(),arr.end());
    for(long i=0;i<10;i++){
        int index=rand()%arr.size();
        int index2=(index+1)%arr.size();
        if(index>index2 && arr[index]<arr[index2]) swap(arr[index2],arr[index]);
        else if(index<index2 && arr[index]>arr[index2]) swap(arr[index2],arr[index]);
    }
    for(auto itr:arr){
        cout<<itr<<" ";
    }
    cout<<endl;
    vector<int> arr1={3,2,5,2,5,1,5,7,29,99};
    return arr;
    // return arr1;
}
BOOST_AUTO_TEST_SUITE(SUitname)
BOOST_AUTO_TEST_CASE(subtest1){
    vector<int> arr={3,2,5,2,5,1,5,7,29,0};
    vector<int> rarr=nSort(arr);
    {
        BOOST_CHECK_EQUAL(arr.size(),rarr.size());
    }
    {
        unordered_map<int, int> mp;
        for(auto itr:rarr){
            mp[itr]++;
        }
        for(auto itr:arr){
            BOOST_CHECK(mp[itr]!=0);
            mp[itr]--;
        }
    }
    {
        for(long i=0;i<rarr.size()-1;i++){
            BOOST_CHECK(rarr[i]<=rarr[i+1]);
        }
    }
}
BOOST_AUTO_TEST_SUITE_END()