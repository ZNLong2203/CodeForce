#include<bits/stdc++.h>
using namespace std;

bool solve() {
	int n;
	cin >> n;
	vector<int> a(n),b(n);
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n;i++) cin >> b[i];
	bool plus = false , minus = false;
	for(int i=0;i<n;i++) {
		if(a[i]<b[i] && plus == false) return false;
		if(a[i]>b[i] && minus == false) return false;
		if(a[i]==1) plus = true;
		if(a[i]==-1) minus = true;
	}	
	return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		if(solve()) cout << "YES\n";
		else cout << "NO\n";
	}
}