#include<bits/stdc++.h>
#define ll long long
using namespace std;

void work(ll l, ll r, ll a) {
	long long xet1 = (r/a)+(r%a);
	long long xet2 = ((r/a)-1)+(a-1);
	long long so = (((r/a)-1)*a)+(a-1);
	if(so<l) {
		xet2 =(l/a)+(l%a);
	}
	if(xet1 < xet2) {
		cout << xet2 << endl;
		return;
	}	else {
		cout << xet1 << endl;
		return;
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long l,r,a;
		cin >> l >> r >> a;
		work(l,r,a);
	}
}