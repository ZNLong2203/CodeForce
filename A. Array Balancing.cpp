#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> a,b;
	ll sum = 0;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		a.push_back(x);
	}	
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		b.push_back(x);
	}	
	for(int i=0;i+1<n;i++) {
		sum += min(abs(a[i+1]-a[i]) + abs(b[i+1]-b[i]), abs(b[i+1]-a[i]) + abs(a[i+1]-b[i]));
	}
	cout << sum << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}