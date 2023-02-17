#include<iostream>
#include<cstdio>
using namespace std;
int n,a[101],t;
int main(){
	for(int i=0;1;i++){
		scanf("%d",&n);
		if(n==0) break;
		a[i]=n;
		t=i;
	}
	for(int i=t;i>=0;i--){
		printf("%d ",a[i]);
	}
	return 0;
}
