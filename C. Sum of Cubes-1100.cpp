#include<bits/stdc++.h>
#define ll long long
using namespace std;

unordered_set<ll> s;

void luu() {
	for(ll i=1;i*i*i<=pow(10,12);i++) {
		s.insert(i*i*i);
	}
	return;
}

void solve() {
	ll n,xet;
	cin >> n;
	for(ll i=1;i*i*i<=n;i++) {
		xet = n-i*i*i;
		if(s.count(xet)) {
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	return;
}

int main() {
	int t;
	cin >> t;
	luu();
	while(t--) {
		solve();
	}
}