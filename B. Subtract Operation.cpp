#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> v,ll n,ll m) {
	set<int> s(v.begin(),v.end());
	for(int i=n-1;i>=0;i--) {
		if(s.count(v[i]+m)) {
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
		ll n,m;
		cin >> n >> m;
		vector<int> v;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		solve(v,n,m);
	}
}