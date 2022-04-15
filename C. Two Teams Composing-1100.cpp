#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v(n+1);
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v[x]++;
		}
		sort(v.begin(),v.end());
		int mx = v[n];
		int diff = n + 1 - count(v.begin(),v.end(),0);
		cout << max(min(mx,diff-1) , min(mx-1,diff)) << endl;
	}
}