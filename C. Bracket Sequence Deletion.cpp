#include<bits/stdc++.h>
#define ll long long
#include<ctype.h>
using namespace std;
const int mod = 1e9 + 7;

void solve(int n,string s) {
	n = s.size();
	int i = 0;
	int c = 0;
	while (i < s.size() - 1) {
    if (s[i] == s[i + 1]) {
      c++;
      i += 2;
      continue;
    }
    if (s[i] == '(' && s[i + 1] == ')') {
      c++;
      i += 2;
      continue;
    }
    int index = -1;
    for (int k = i + 1; k < n; k++) {
      if (s[k] == ')') {
        c++;
        index = k;
        break;
      }
    }
    if (index == -1) break;
    i = index + 1;
  	}
  	int l = 0;
  	if (i < n) {
    	l = n - i;
    }
	cout << c << " " << l << endl;
}

int main(){
    int t; 
	cin >> t;
    while(t--){
    	int n; 
		cin >> n;
		string s; 
		cin >> s;
        solve(n,s);
    }
    return 0;
}