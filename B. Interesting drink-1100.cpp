#include<bits/stdc++.h>
using namespace std;

void work(int shop[],int coin,int n,int m) {
	auto it = upper_bound(shop,shop+n,coin);
	if(coin < shop[0]) {
		cout << "0" << endl;
		return;
	}	else cout << it-shop << endl;
}

int main() {
	int n,m;
	cin >> n;
	int shop[n+10]={0};
	for(int i=0;i<n;i++) {
		cin >> shop[i];
	}
	cin >> m;
	int coin[m+10]={0};
	sort(shop,shop+n);
	for(int i=0;i<m;i++) {
		cin >> coin[i];
		work(shop,coin[i],n,m);
	}
}