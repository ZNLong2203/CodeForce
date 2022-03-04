#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m,rb,cb,rd,cd;
		scanf("%d%d%d%d%d%d",&n,&m,&rb,&cb,&rd,&cd);
		int count=0;
		int xet1=1;
		int xet2=1;
		while(true) {
			if(rb==rd || cb==cd) {
				break;
			}
			if(rb+xet1>n || rb+xet1<1) {
				xet1*=-1;
			}
			if(cb+xet2>m || cb+xet2<1) {
				xet2*=-1;
			}
			rb+=xet1;
			cb+=xet2;
			count++;
		}
		printf("%d\n",count);
	}
}
