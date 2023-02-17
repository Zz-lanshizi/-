#include<iostream>
using namespace std;
int N,j=1,k,x,y;
int main(){
	scanf("%d",&N);
	while(N>j){
		N=N-j;
		j++;
	}
	k=N-1;
	if(j%2==0) x=1+k,y=j-k;
	else x=j-k,y=1+k;
	printf("%d/%d",x,y);
	return 0;
}
