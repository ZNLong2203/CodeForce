#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(priority_queue<ll> a,priority_queue<ll> hp) {
	while(a.size() >= hp.size()) {
		if(a.empty()) {
			cout << "YES\n";
			return;
		}
		if(hp.top() == a.top()) {
			hp.pop();
			a.pop();
		}	else {
			auto x = hp.top();
			hp.pop();
			hp.push(x/2);
			hp.push((x+1)/2);
		}
	}
	cout << "NO\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll sum = 0;
		priority_queue<ll> a,hp;
		for(int i=0;i<n;i++) {
			ll x; cin >> x;
			a.push(x);
			sum+=x;
		} 
		hp.push(sum);
		solve(a,hp);
	}
}