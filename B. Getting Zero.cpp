#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll mod = 32768;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll x; cin >> x;
		ll mn = 15;
		for(ll i=0;i<=15;i++) {
			ll newso = x+i;
			for(ll j=0;j<=15;j++) {
				if((newso * (ll)pow(2,j)) % mod == 0) {
					mn = min(j+i,mn);
				}
			}
		}
		cout << mn << " ";
	}
}