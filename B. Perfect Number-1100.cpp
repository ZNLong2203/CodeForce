#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n) {
	int count = 0;
	for(int i=19;i<=1000000000;i++) {
		ll xet = i;
		ll sum = 0;
		while(xet>0) {
			sum+=xet%10;
			xet/=10;
			if(sum>10) break;
		}
		if(sum==10) count++;
		if(count == n) {
			cout << i;
			return;
		}
	}	
}

int main() {
	int n;
	cin >> n;
	solve(n);
}