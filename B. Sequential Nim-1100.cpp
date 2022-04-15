#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> v;
	int count = 0, dem1 = 0;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		if(x==1) dem1++;
	}	
	if(dem1==n) {
		if(dem1%2!=0) {
			cout << "First\n";
			return;
		}	else {
			cout << "Second\n";
			return;
		}
	}
	int j=0;
	while(v[j]==1) {
		count++;
		j++;
	}
	if(count%2!=0) cout << "Second\n";
	else cout << "First\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}