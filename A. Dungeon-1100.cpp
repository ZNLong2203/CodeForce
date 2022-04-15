#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a,b,c;
		cin >> a >> b >> c;
		ll mn =min(a,b);
		mn = min(mn,c);
		ll sum = a+b+c;
		if(sum%9==0 && sum/9<=mn) cout << "YES\n";
		else cout << "NO\n";
	}
}