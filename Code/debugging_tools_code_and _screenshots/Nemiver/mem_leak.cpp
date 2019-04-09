#include <bits/stdc++.h>
using namespace std;

void func(){
	int *a=(int *)malloc(sizeof(int)*10);
	for(int i=0;i<10;i++){
		a[i]=i;
	}
	return ;
}

int main(){
	func();
	return 0;
}