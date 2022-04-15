#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n,b,x,y;
		cin >> n >> b >> x >> y;
		ll sum = 0;
		ll index = 0;
		for(int i=0;i<n;i++) {
			if(index+x > b) {
				index-=y;
				sum+=index;
			}	else {
				index+=x;
				sum+=index;
			}
		}
		cout << sum << endl;
	}
}