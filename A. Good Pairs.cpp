#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v,xet;
		int lon = 0;
		int be = 10000000;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v.push_back(x);
			xet.push_back(x);
		}
		sort(xet.begin(),xet.end());
		auto it1 = find(v.begin(),v.end(),xet[0]);
		auto it2 = find(v.begin(),v.end(),xet[n-1]);
		cout << it1 - v.begin() + 1 << " " << it2 - v.begin() + 1 << endl;
	}
}