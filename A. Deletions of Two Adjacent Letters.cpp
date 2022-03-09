#include<bits/stdc++.h>
using namespace std;

int check(string s ,char c) {
	for(int i=0;i<s.size();i++) {
		if(s[i]==c) {
			if(i%2==0 || i==0) {
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		char c;
		cin >> c;
		if(check(s,c)==1) {
			cout << "YES\n";
		}	else cout << "NO\n";
	}
}