#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int n,a[101],t;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	for(int i=0;1;i++){
		scanf("%d",&n);
		if(n==0) break;
		a[i]=n;
		t=i;
	}
	for(int i=t;i>=0;i--){
		printf("%d ",a[i]);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
