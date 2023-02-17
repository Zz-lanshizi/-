#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int n,m,x,y;
int map[505][505];
int lx[8]={2,1,-1,-2,-2,-1,1,2};
int ly[8]={1,2,2,1,-1,-2,-2,-1}; 
void in(int dx,int dy,int num){
	if(map[dx][dy]!=-1&&map[dx][dy]<=num) return;
	map[dx][dy]=num;
	for(int i=0;i<8;i++){
		int nx,ny;
		nx=dx+lx[i];
		ny=dy+ly[i];
		if(nx<1||nx>n||ny<1||ny>m) continue;
		in(nx,ny,num+1);
	}
}
int main(){
	memset(map,-1,sizeof(map));
	scanf("%d%d%d%d",&n,&m,&x,&y);
	in(x,y,0);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			printf("%d ",map[i][j]);	
		}
		printf("\n");
	}
	return 0;
} 
