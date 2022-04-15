#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	int count = 0;
	while(n!=0 && m!=0) {
		if(n==1 && m==1) break;
		if(n>m) {
			n-=2;
			m+=1;
			count++;
		}	else if(n<=m) {
			m-=2;
			n+=1;
			count++;
		}
	}
	cout << count;
}