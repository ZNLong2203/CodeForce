#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m,rb,cb,rd,cd;
		scanf("%d%d%d%d%d%d",&n,&m,&rb,&cb,&rd,&cd);
		int count=0;
		int countbreak=0;
		while(rb!=rd && cb!=cd) {
			rb++;
			cb++;
			count++;
			if(rb==n) {
				while(rb!=rd && cb!=cd) {
					rb--;
					cb++;
					count++;
					countbreak++;
				}
			}
			if(cb==m) {
				while(rb!=rd && cb!=cd) {
					rb++;
					cb--;
					count++;
					countbreak++;
				}
			}
			if(countbreak!=0) {
				break;
			}
		}
		printf("%d\n",count);
	}
}
