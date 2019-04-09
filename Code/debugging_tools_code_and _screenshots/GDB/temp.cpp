#include<bits/stdc++.h>
using namespace std;

int function1(int n,int a){
    if(n>0){
        function1(n-1,a);
        int b=a;
        int pp=a/n;
        int qq[10];
        qq[10]=10;
        return pp;

    }
    return 1000;
}

int main(){
	cout<<function1(3,10)<<"\n";
	return 0;
}