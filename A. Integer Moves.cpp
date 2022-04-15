#include<bits/stdc++.h>
using namespace std;

void solve(int n,int m) {
	float xet = sqrt(n*n+m*m);
	if(n==0 && m==0) {
		cout << "0\n";
		return;
	}	else if(xet==(int)xet) {
		cout << "1\n";
		return;
	}	else cout << "2\n";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		solve(n,m);
	}
}