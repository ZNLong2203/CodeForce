#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	int count=0;
	while(t--) {
		int a[10];
		int dem=0;
		for(int i=0;i<3;i++) {
			scanf("%d",&a[i]);
			if(a[i]==1) {
				dem++;
			}
		}
		if(dem>=2) {
			count++;
		}
	}
	printf("%d",count);
}
