#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	multiset<int> st;
	set<int> s;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		st.insert(x);
	}
	int count = 0;
	while(!st.empty()) {
		s.clear();
		for(auto x:st) {
			if(s.find(x)==s.end()) {
				s.insert(x);
			}
		}
		for(auto x:s) {
			st.erase(st.find(x));
		}
		count+=s.size()-1;
	}
	cout << count;
}