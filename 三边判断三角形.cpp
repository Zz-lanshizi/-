#include<iostream>
#include<cmath>
#include<algorithm>
bool cmp(int x,int y){
	return x<y;
}
using namespace std;
int a[3];
int main(){
	scanf("%d %d %d",&a[0],&a[1],&a[2]);
	sort(&a[0],&a[3],cmp);
	if(a[0]+a[1]>a[2]&&a[2]-a[0]<a[1]){
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) printf("Right triangle\n");
		if(a[0]*a[0]+a[1]*a[1]>a[2]*a[2]) printf("Acute triangle\n");
		if(a[0]*a[0]+a[1]*a[1]<a[2]*a[2]) printf("Obtuse triangle\n");
		if(a[0]==a[1]) printf("Isosceles triangle\n");
		if(a[0]==a[1]&&a[0]==a[2]) printf("Equilateral triangle\n");
	}
	else printf("Not triangle");
}
