#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n, count=0;
	cin >> n;
	map<int,int> mp;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		mp[x]++;
	}
	int mx = 0;
	for(auto x:mp) {
		if(x.second>mx) mx = x.second;
	}
	if(n==1 || mx==n) {
		cout << "0\n";
		return;
	}
	n-=mx*2;
	if(n>=0) {
		count = 1 + mx;
	}	else {
		count = 1 + n+mx;
	}
	while(n>0) {	
		mx*=2;
		if(n-mx<0) {
			count += 1 + n;
		}	else count += 1 + mx;
		n-=mx;
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}