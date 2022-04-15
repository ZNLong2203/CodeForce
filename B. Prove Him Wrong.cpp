#include<bits/stdc++.h>
using namespace std;

void work(long long big, int n) {
	vector<int> v;
	long long xet=1;
	v.push_back(xet);
	for(int i=1;i<n;i++) {
		xet=(3*xet);
		if(xet>big) {
			cout << "NO" << endl;
			return;
		}
		v.push_back(xet);
	}	
	cout << "YES" << endl;
	for(auto x:v) {
		cout << x << " ";
	}
	cout << endl;
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		long long big = pow(10,9);
		work(big,n);
	}
}