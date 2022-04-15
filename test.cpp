#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	float n,xet;
	cin >> n;
	for(ll i=1;i<=pow(n,1.0/3);i++) {
		xet = n-i*i*i;
		if(xet==0) {
			cout << "NO\n";
			return;
		}
		xet = pow(xet,1.0/3);
		if(xet==(ll)xet) {
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
	while(t--) {
		solve();
	}
}