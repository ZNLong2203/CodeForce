#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a[1000000];
		int n;
		cin >> n;
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		unsigned long long sumlow=0;
		unsigned long long sumhigh=0;
		unsigned long long xet=(n/2)+1;
		if(n%2!=0) {
			for(int i=0;i<xet;i++) {
			sumlow+=a[i];
			}
			for(int i=xet;i<n;i++) {
				sumhigh+=a[i];
			}
			if(sumlow<sumhigh) {
				cout << "YES\n";	
			}	else cout << "NO\n";
		}	else {
			for(int i=0;i<xet-1;i++) {
				sumlow+=a[i];
			}
			for(int i=xet;i<n;i++) {
				sumhigh+=a[i];
			}
			if(sumlow<sumhigh) {
				cout << "YES\n";	
			}	else cout << "NO\n";
		}
	}
}