#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll sum = 0;
		ll m = 0;
		for(int i=0;i<n;i++) {
			ll x; cin >> x;
			m = max(m,x);
			sum+=x;
		}
		if(m == 0) cout << "0\n";
		else if(2*m <= sum+1) cout << "1\n";
		else cout << 2*m-sum << endl;
	}
}