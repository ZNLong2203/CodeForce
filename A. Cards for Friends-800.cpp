#include<bits/stdc++.h>
using namespace std;

void solve(int w, int h, int n) {
	int count = 1;
	while(w%2==0) {
		count*=2;
		w/=2;
	}	
	while(h%2==0) {
		count*=2;
		h/=2;
	}	
	if(count>=n) cout << "YES\n";
	else cout << "NO\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int w,h,n;
		cin >> w >> h >> n;
		solve(w,h,n);
	}
}