#include<bits/stdc++.h>
using namespace std;

int function(int n,int *a);

// int x=0;

int main(){
	int *a=(int *)malloc(sizeof(int)*10);
	int n=10;
	cout<<function(n,a)<<"\n";
	return 0;
}

int function(int n,int *a){
	if(n==1){
		a[n]=1;
		return a[n];
	}
	else{
		a[n]=function(n-1,a)+1;
		return a[n];
	}
}