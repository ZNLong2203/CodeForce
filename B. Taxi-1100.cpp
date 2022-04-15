#include<bits/stdc++.h>
#define ll long long
using namespace std;

void work(int a[],ll sum,int n) {
	double du=0,sobe=0;
	sum+=(a[2]/2);
	du=a[2]%2;
	a[2]=a[2]-(a[2]-du);
	if(a[1]!=0 ) {
		sobe=min(a[1],a[3]);
		a[3]-=sobe;
		a[1]-=sobe;
		sum+=sobe;
		if(a[1]!=0 && a[2]!=0) {
			sobe=min(a[1],2);
			a[1]-=sobe;
			a[2]--;
			sum+=1;
		}
		if(a[1]>0) {
			du=round((a[1]/4.0)+0.499);
			sum+=du;
		}
	}	
	sum+=a[3];
	sum+=a[2];
	cout << sum;
	return;
}

int main() {
	int n;
	cin >> n;
	ll sum=0;
	int a[1000]={0};
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		a[x]++;
	}
	sum+=a[4];
	work(a,sum,n);
}