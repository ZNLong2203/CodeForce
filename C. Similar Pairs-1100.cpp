#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> v ,int odd ,int even, int n) {
	if(odd%2!=even%2) {
		cout << "NO\n";
		return;
	}
	if(odd%2==0 && even%2==0) {
		cout << "YES\n";
		return;
	}	else {
		for(int i=1;i<n;i++) {
			if(v[i]-v[i-1]==1) {
				cout << "YES\n";
				return;
			}	
    	}
    }
	cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector<int> v;
		int odd = 0, even = 0;
		for(int i=0;i<n;i++) {
			int x; cin >> x;
			v.push_back(x);
			if(x%2==0) even++;
			else odd++;
		}
		sort(v.begin(),v.end());
		solve(v,odd,even,n);
	}
}