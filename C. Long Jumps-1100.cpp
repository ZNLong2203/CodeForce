#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<ll> dp, int n) {
	ll mx = 0;
	for(int i=n-1;i>=0;i--) {
		if(i+dp[i]<n) {
			dp[i]+=dp[i+dp[i]];
		}
		mx = max(mx,dp[i]);
	}
	cout << mx << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<ll> dp;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			dp.push_back(x);
		}
		solve(dp,n);
	}
}