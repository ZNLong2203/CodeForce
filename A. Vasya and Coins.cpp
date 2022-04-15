#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a,b;
		cin >> a >> b;
		if(a==0) cout << "1\n";
		else cout << (a+b*2)+1 << endl;
	}
}