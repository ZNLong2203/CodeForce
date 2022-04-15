#include<bits/stdc++.h>
#define ll long long
ll mod = 998244353;
using namespace std;

void solve(int n) {
	if(n%2!=0) {
		cout << "0" << endl;
		return;
	}	
	ll tinh = 1;
	for(int i=2;i<=n/2;i++) {
		tinh = (tinh*i)%mod;
	}
	tinh%=mod;
	tinh*=tinh;
	tinh%=mod;
	cout << tinh << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		solve(n);
	}
}