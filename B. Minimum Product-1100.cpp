#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll s(ll a, ll b, ll x, ll y, ll n) {
	ll minus = min(a-x,n);
	a-=minus;
	n-=minus;
	minus = min(b-y,n);
	b-=minus;
	return a*b;	
}

void solve() {
	ll a,b,x,y,n;
	cin >> a >> b >> x >> y >> n;
	cout << min( s(a,b,x,y,n) , s(b,a,y,x,n) ) << endl;
	return;	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		solve();
	}
}