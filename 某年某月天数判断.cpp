#include<iostream>
using namespace std;
int y,m;
int days[12]={31,28,31,30,31,30,31,31,31,30,30,31};
int main(){
	scanf("%d %d",&y,&m);
	if(y%100==0&&y%400==0&&m==2) printf("%d",days[1]+1);
	else if(y%100!=0&&y%4==0&&m==2) printf("%d",days[1]+1);
	else printf("%d",days[m-1]);
	return 0;
}
