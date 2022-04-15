#include<bits/stdc++.h>
using namespace std;

void work(string &s,long long n,long long sum) {
	for(int i=1;i<10000;i++) {
		if(i%2!=0) {
			s.push_back('2');
			sum+=2;
		}	else {
			s.push_back('1');
			sum+=1;	
		}
		if(sum==n) {
			cout << s << endl;
			return;
		}	else if(sum>n) {
			s.pop_back();
			cout << "1" << s << endl;
			return;
		}
	}
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		long long n;
		cin >> n;
		string s = "";
		long long sum = 0;
		work(s,n,sum);
	}
}