#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	freopen("str.in","r",stdin);
	freoprn("str.out","w",stdout);
	char s[10];
	gets(s);
	int len=strlen(s);
	int ans=0;
	for(int i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='Z') ans++;
		if(s[i]>='a'&&s[i]<='z') ans++;
		if(s[i]>='0'&&s[i]<='9') ans++;
	}
	printf("%d",ans);
	freclose(stdin);
	freclose(stdout);
	return 0;
}
