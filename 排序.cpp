#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm> 
using namespace std;
int a[3];
bool cmp(int x,int y){
	return x<y;
}
int main(){
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	sort(&a[0],&a[3],cmp);
	for(int i=0;i<3;i++){
		cout<<a[i]<<" "; 
	}
	return 0;
}
