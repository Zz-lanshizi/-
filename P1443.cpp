#include<iostream>
#include<queue>
#include<cstdio>
#include<cstring>
using namespace std;

int n,m,park[1001][1001],room[1001][1001];
int dir[8][2]={{2,1},{-2,1},{2,-1},{-2,-1},{1,2},{-1,2},{1,-2},{-1,-2}};
int xa,ya;
int num=0;

bool check(int x,int y){
    if(x<=n&&x>0&&y<=m&&y>0) return true;
    else return false;
}

struct node{
    int x,y;
};

void bfs(int x,int y){
    node start,tmp;
    queue <node>brick;
    start.x=x;
    start.y=y;
    brick.push(start);
    while(!brick.empty()){
        start=brick.front();
        brick.pop();
        for(int i=0;i<8;i++){
            tmp.x=start.x+dir[i][0];
            tmp.y=start.y+dir[i][1];
            if(check(tmp.x,tmp.y)&&park[tmp.x][tmp.y]==-1){
                brick.push(tmp);
                park[tmp.x][tmp.y]=park[start.x][start.y]+1;
            }
        }
    }
}

int main(){
    memset(park,-1,sizeof(park));
    cin>>n>>m>>xa>>ya;
    park[xa][ya]=0;
    bfs(xa,ya);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<park[i][j]<<" ";
        }
        cout<<endl;
    }
    system("pause");
    return 0;
}