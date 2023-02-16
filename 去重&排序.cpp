#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m;
bool cmp(int y,int x){
	return x>y;
}
int main(){
	cin>>m;
	int a[m];
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	sort(&a[0],&a[m],cmp);
	int cnt=unique(&a[0],&a[m])-&a[0];
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
