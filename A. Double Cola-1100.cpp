#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll sll = 5;
	ll sum = 5;
	int count = 2;
	while(sum < n) {
		sll*=2;
		sum+=sll;
		count*=2;	
	}
	sum-=sll;
	count/=2;
	int index = 0;
	while(sum <= n) {
		sum+=count;
		index++;
	}
	if(n<=5) index = n;
	switch(index){
		case 1:
			cout << "Sheldon";
			break;
		case 2:
			cout << "Leonard";
			break;
		case 3:
			cout << "Penny";
			break;
		case 4:
			cout << "Rajesh";
			break;
		case 5:
			cout << "Howard";
			break;
	}
}