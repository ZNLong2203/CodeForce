#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int a[n+5]={0};
	int dp[n+5]={0};
	set<int> s;
	for(int i=0;i<n;i++)  {
		cin >> a[i];
	}
	for(int i=n-1;i>=0;i--) {
		s.insert(a[i]);
		dp[i]=s.size();
	}
	while(m--) {
		int x;
		cin >> x;
		cout << dp[x-1] << endl;
	}
}