#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		double n;
		cin >> n;
		double xet =(1/(1-(n/180)))*2;
		if(round(xet+0.49)-xet<=0.01) cout << "YES\n";
		else cout << "NO\n";
	}
}