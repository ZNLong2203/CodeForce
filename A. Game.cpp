#include<bits/stdc++.h>
using namespace std;

void solve(int n) {
	vector<int> v;
	int sum = 0;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
		sum+=x;
	}
	if(sum==n) {
		cout << "0\n";
		return;
	}
	int l = 0, r = n-1;
	while(v[l+1]==1) {
		l++;
	}
	while(v[r-1]==1) {
		r--;
	}
	cout << r-l << endl;
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