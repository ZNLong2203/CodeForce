#include<stdio.h>
#include<math.h>
int main() {
	int t;
	scanf("%d",&t);
	while(t--) {
		long long n,k;
		scanf("%lld%lld",&n,&k);
		int a[10000];
		for(int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		long long temp;
		for(int i=0;i<n-1;i++) {
			for(int j=0;j+1<n;j++) {
				if(a[j]>a[j+1]) {
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		int count=0;
		long long xettong=0;
		long long xet1=0;
		long long xet2=10000;
		int ok=0;
		for(int i=1;i<n;i++) {
			if(n>k) {
				xettong+=a[i];
				xet1=round(((k-xettong)/(n-i))-0.99);
				xet1=(n-i-1)+1-xet1;
				if(xet1<xet2) {
					xet2=xet1;
					ok++;
				}
			}
		}
		if(ok!=0) {
			printf("%d\n",xet2);	
		}
		int tong=0;
		for(int i=0;i<n;i++) {
			tong+=a[i];
		}
		if(tong<=k && ok==0) {
			printf("%d\n",count);
		} else if(tong>k && ok==0) {
			for(int i=n-1;i>=0;i--) {
				if(a[i]>a[0]) {
					count++;
					tong-=a[i]-a[0];
					if(tong<=k) {
						printf("%d\n",count);
						break;
					} 
				}	else if(n==1) {
					count=a[0]-k;
					printf("%d\n",count);
					break;
				}
			}
		}
	}
}
