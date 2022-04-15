#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		set<char> prev;
		int count = 0;
		for(auto c:s) {
			if(prev.count(c)) {
				count += prev.size()-1;
				prev.clear();
			}	else prev.insert(c);
		}
		count+=prev.size();
		cout << count << endl;
	}
}