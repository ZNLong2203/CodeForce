#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main() {
	char str[10000];
	gets(str);
	char vowels[20]="aoyeuiAOYEUI";
	for(int i=0;i<strlen(str);i++) {
		int count=0;
		for(int j=0;j<strlen(vowels);j++) {
			if(str[i]==vowels[j]) {
				count++;
			}
		}
		if(isupper(str[i])) {
			str[i]+=32;
		}
		if(count==0) {
			printf(".%c",str[i]);
		}
	}
}
