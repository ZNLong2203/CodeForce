#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		int count = 0;
		for(int i=0;i+1<s.size();i++) {
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0') {
				count++;
			}	else if(s[i]=='0' && s[i+1]=='0') {
				count+=2;
			}
		}
		cout << count << endl;
	}
}