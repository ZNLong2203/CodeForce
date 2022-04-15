#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,m;
		cin >> n >> m;
		int a[200][200]={0};
		set<int> r,c;
		for(int i=0;i<n;i++) {
			for(int j=0;j<m;j++) {
				cin >> a[i][j];
				if(a[i][j]==1) {
					r.insert(i);
					c.insert(j);
				}
			}
		}
		int xet = min(n-r.size(),m-c.size());
		if(xet%2==0) cout << "Vivek\n";
		else cout << "Ashish\n";
	}
}