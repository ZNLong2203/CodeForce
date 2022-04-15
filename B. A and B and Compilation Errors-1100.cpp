#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int,int> m1,m2;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		m1[x]++;
	}
	for(int i=0;i<n-1;i++) {
		int x; cin >> x;
		m1[x]--;
		m2[x]++;
	}
	for(int i=0;i<n-2;i++) {
		int x; cin >> x;
		m2[x]--;
	}
	for(auto x:m1) {
		if(x.second!=0) {
			cout << x.first  << endl;
		}
	}
	for(auto x:m2) {
		if(x.second!=0) {
			cout << x.first  << endl;
		}
	}
}