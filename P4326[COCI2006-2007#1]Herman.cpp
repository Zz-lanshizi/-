#include<iostream>
#include<cmath>
using namespace std;
const double pie=acos(-1);
double n;
int main(){
	scanf("%lf",&n);
	printf("%.6lf\n%.6lf",pie*n*n,n*n*2.0);
	return 0;
} 
