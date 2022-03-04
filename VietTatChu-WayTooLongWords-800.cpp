#include<stdio.h>
#include<string.h>
int main() {
	int t;
	scanf("%d\n",&t);
	while(t--) {
		char str[1000];
		gets(str);
		int dodai=(int)strlen(str);
		int xet;
		if(dodai>10) {
			xet=dodai-2;
			printf("%c%d%c\n",str[0],xet,str[dodai-1]);
		} else {
			printf("%s\n",&str);
		}
	}	
}
