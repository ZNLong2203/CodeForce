#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	int a[n+5]={0};
	for(int i=0;i<n;i++) cin >> a[i];
	int sum = 0,index = 1;
	for(int i=0;i<k;i++) {
		sum+=a[i];
	}
	int record = sum;
	for(int i=k;i<n;i++) {
		sum = sum + a[i] - a[i-k];
		if(record > sum) {
			record = sum;
			index = i-k+1+1;
		}
	}
	cout << index;
}