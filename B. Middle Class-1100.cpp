#include<bits/stdc++.h>
using namespace std;

void solve() {
	int n,x;
	cin >> n >> x;
	vector<double> v;
	for(int i=0;i<n;i++) {
		double x; cin >> x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	long long sum = 0;
	int count = 0;
	for(int i=n-1;i>=0;i--) {
		sum+=v[i];
		if(sum/(n-i)>=x) {
			count = n-i;
		}	else break;
	}
	cout << count << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}