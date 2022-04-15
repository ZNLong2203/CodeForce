#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,m;
	cin >> n >> m;
	int kq = min(n,m);
	cout << min(kq,(n+m)/3) << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}