#include<iostream>
#include<cmath>
#include<cstdio>
#include<algorithm>
#include<queue>
using namespace std;

int W,H;
int x2,y2;
char park[22][22];
int dir[4][2]= {{1,0},{-1,0},{0,1},{0,-1}};

struct node {
	int x,y;
};

bool check(int x,int y) {
	if(x>=0&&y>=0&&x<H&&y<W) return true;
	else return false;
}

void bfs(int n,int m) {
	int num=1;
	queue <node>brick;
	node start,next;
	start.x=n;
	start.y=m;
	brick.push(start);
	while(!brick.empty()) {
		start=brick.front();
		brick.pop();
		for(int i=0; i<4; i++) {
			next.x=start.x+dir[i][0];
			next.y=start.y+dir[i][1];
			if(check(next.x,next.y)&&park[next.x][next.y]=='.') {
				num++;
				park[next.x][next.y]='#';
				brick.push(next);
			}
		}
	}
	cout<<num<<endl;
}

int main() {
	cin>>W>>H;
	for(int i=0; i<H; i++) {
		for(int j=0; j<W; j++) {
			cin>>park[i][j];
			if (park[i][j]=='@') x2=i,y2=j,park[i][j]='#';
		}
	}
	bfs(x2,y2);
	system("pause");
	return 0;
}
