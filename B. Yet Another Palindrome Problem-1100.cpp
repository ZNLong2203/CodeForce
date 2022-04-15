#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v, int n) {
	for(int i=0;i<n;i++) {
		for(int j=i+2;j<n;j++) {
			if(v[i]==v[j]) {
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v.push_back(x);
		}
		solve(v,n);
	}
}