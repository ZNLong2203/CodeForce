#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll a[],ll n) {
	if(n==1 && a[0]>1) {
		cout << "NO\n";
		return;	
	}
	if(a[n-1]-a[n-2]>1) {
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		ll a[n+5]={0};
		for(ll i=0;i<n;i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		solve(a,n);
	}
}