#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,th;
int a[100001];
int ds(int th,int a[]){
	int cnt=unique(&a[0],&a[m])-&a[0];
	int l=0,r=cnt,mid;
	bool found=false;
	while(l<=r&&not found){
		mid=(l+r)/2;
		if(th<a[mid]) r=mid-1;
		if(a[mid]<th) l=mid+1;
		if(a[mid]==th) found=true;
	}
	if(found) return mid+1;
	else return -1;
}
int main(){
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0,k;i<m;i++){
		scanf("%d",&th);
		k=ds(th,a);
		printf("%d ",k);
	}
} 
