#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(ll n,ll k) {
	if(n%2==k%2 && k*k<=n) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n,k;
		cin >> n >> k;
		solve(n,k);
	}
}