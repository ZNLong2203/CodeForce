#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	int x,y,z;
	x=0;y=0;z=0;
	while(n--) {
		int xq,yq,zq;
		scanf("%d%d%d",&xq,&yq,&zq);
		x+=xq;
		y+=yq;
		z+=zq;
	}
	if(x==0 && y==0 && z==0) {
		printf("YES");
	}	else printf("NO");
}
