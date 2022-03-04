#include<stdio.h>
int main() {
	long long n,m,a;
	scanf("%lld%lld%lld",&n,&m,&a);
	long long xetn,xetm;
	xetn=n;
	xetm=m;
	long long gachn=0;
	long long gachm=0;
	long long gach=0;
	if(n%a==0) {
		gachn=n/a;
	}	else gachn=(n/a)+1;
	if(m%a==0) {
		gachm=m/a;
	}	else gachm=(m/a)+1;
	gach=(gachn+gachm-1)+((gachn-1)*(gachm-1));
	printf("%lld",gach);
}
