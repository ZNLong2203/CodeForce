#include<bits/stdc++.h>
using namespace std;

void solve(int a[],int n) {
	vector<int> v;
	int cnt = 0;
	for(int i=0;i+1<n;i++) {
		if(a[i+1]-a[i]!=0) {
			v.push_back(a[i+1]-a[i]);
			cnt++;	
		}
	}
	if(cnt == 0) {
		cout << "YES\n";
		return;
	}
	if(count(a,a+n,1)!=0) {
		if(count(v.begin(),v.end(),1)!=0) {
			cout << "NO\n";
			return;		
		}
	}	
	cout << "YES\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[100000];
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		solve(a,n);
	}
}