#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(vector<int> v, int n) {
	ll sum = 0;
	int a[105]={0};
	if(v[0]!=25) {
		cout << "NO\n";
		return;
	}	else {
		for(int i=0;i<n;i++) {
			while(v[i]==25) {
				a[25]++;
				i++;
			}
			if(i>=n) break;
			if(v[i]==100) {
				if(a[25]>=1 && a[50]>=1) {
					a[25]--;
					a[50]--;
				}	else if(a[25]>=3) {
					a[25]-=3;
				}	else {
					cout << "NO\n";
					return;
				}
			}
			if(v[i]==50) {
				if(a[25]>=1) {
					a[25]--;
					a[50]++;
				}	else {
					cout << "NO\n";
					return;
				}
			}
		}
		cout << "YES\n";
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	for(int i=0;i<n;i++) {
		int x; cin >> x;
		v.push_back(x);
	}
	solve(v,n);
}