#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int a[10000]={0};
		for(int i=0;i<n;i++) {
			cin >> a[i];
		}
		sort(a,a+n);
		cout << a[n-1]-a[0] << endl;
	}
}