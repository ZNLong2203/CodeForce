#include<bits/stdc++.h>
using namespace std;

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
		int mn = v[n-1], count = 0;
		for(int i=n-2;i>=0;i--) {
			if(v[i]>mn) {
				count++;
			}
			mn=min(mn,v[i]);
		}
		cout << count << endl;
	}
}