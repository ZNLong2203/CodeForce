#include<stdio.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long x,y,z;
		scanf("%lld%lld%lld",&x,&y,&z);
		long long khac,max;
		int count=0;
		int a[100];
		if(x==y) {
			khac=z;
		}	else if(x==z) {
			khac=y;
		} 	else if(y==z) {
			khac=x;
		}	else {
			a[0]=x;
			a[1]=y;
			a[2]=z;
			long long temp;
			for(int i=0;i<2;i++) {
				for(int j=0;j+1<3;j++) {
					if(a[j]>a[j+1]) {
						temp=a[j];
						a[j]=a[j+1];
						a[j+1]=temp;
					}
				}
			}
			if(a[2]-a[1]-a[0]==0) {
				count++;
				printf("YES\n");
			}	else {
				count++;
				printf("NO\n");
			}
		}
		if(khac%2==0 && count==0) {
			printf("YES\n");
		}	else if(khac%2!=0 && count==0) {
			printf("NO\n");	
		}
	}
}
