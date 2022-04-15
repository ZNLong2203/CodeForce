#include<bits/stdc++.h>
using namespace std;

void work(int a[200][200],int n,int m) {
	for(int i=0;i<n-1;i++) {
		for(int j=0;j<m-1;j++) {
			int count=0;
			if(a[i][j]==1) count++;
			if(a[i][j+1]==1) count++;
			if(a[i+1][j]==1) count++;
			if(a[i+1][j+1]==1) count++;
			if(count==3) {
				cout << "NO\n";
				return;
			}
		}
	}	
	cout << "YES\n";
	return;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		int n,m;
		cin >> n >> m;
		int a[200][200]={};
		for(int i=0;i<n;i++) {
			cin >> s;
			for(int j=0;j<m;j++) {
				a[i][j]=s[j]-'0';	
			}
		}
		work(a,n,m);
	}
}