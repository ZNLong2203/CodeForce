#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	vector<int> dp(n+1);
	int sum = 0;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
		sum+=x;
	}	
	if(sum%2!=0) {
		cout << "NO\n";
		return;
	}
	sort(v.begin(),v.end());
	for(int i=n-1;i>=0;i--) {
		dp[i]=v[i]+dp[i+1];
		if(dp[i]==sum/2) {
			cout << "YES\n";
			return;
		}	else if(dp[i]>sum/2) {
			if(count(v.begin(),v.end()-i,1)!=0) {
				cout << "YES\n";
				return;
			}	else {
				cout << "NO\n";
				return;
			}
		}
	}	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}