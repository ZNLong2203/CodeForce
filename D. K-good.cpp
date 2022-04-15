#include<bits/stdc++.h>
using namespace std;

void solve(long long n) {
	long long i = 2;
	while(n%2==0) {
		n/=2;
		i*=2;
	}
	if(n==1) {
		cout << "-1\n";
		return;
	}	else {
		cout << min(i,n) << endl;
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		solve(n);
	}
}