#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,th;
const int L=-1;
int a[10000001];
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//int cnt=unique(&a[0],&a[n])-&a[0];
	for(int i=0,k;i<m;i++){
		scanf("%d",&th);
		int ant=lower_bound(&a[0],&a[n],th)-&a[0];
		if(a[ant]!=th) printf("%d ",L);
		else printf("%d ",ant+1);
	}
	return 0;
} 
