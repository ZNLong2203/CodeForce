#include<stdio.h>
int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	int a[10000];
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int temp=0;
	for(int i=0;i<n-1;i++) {
		for(int j=0;j+1<n;j++) {
			if(a[j]>a[j+1]) {
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	float minus1=0;
	float minus2=0;
	for(int i=0;i+1<n;i++) {
		minus1=a[i+1]-a[i];
		if(minus1>minus2) {
			minus2=minus1;
		}
	}
	minus2=(float)minus2/2.;
	float xet1=k-a[n-1];
	float xet2=a[0];
	if(xet1>minus2) {
		minus2=xet1;
	}
	if(xet2>minus2) {
		minus2=xet2;
	}
	printf("%.10f",minus2);
}
