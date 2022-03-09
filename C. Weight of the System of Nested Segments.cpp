#include<bits/stdc++.h>
using namespace std;

struct Point {
	long long weight, pos, id;	
}; 

void input(Point &pt,int idcount) {
	cin >> pt.pos >> pt.weight;
	pt.id = idcount;	
}

bool cmp1(Point &a, Point &b) {
	return a.pos < b.pos;	
}

bool cmp2(Point &a, Point &b) {
	return a.weight < b.weight;	
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		long long sum=0;
		long long n,m;
		cin >> n >> m;
		Point pt[m+5];
		for(int i=0;i<m;i++) {
			input(pt[i],i+1);
		}
		sort(pt,pt+m,cmp2);
		sort(pt,pt+(n*2),cmp1);
		for(int i=0;i<n*2;i++) {
			sum+=pt[i].weight;
		}
		cout << sum << endl;
		for(int i=0;i<n;i++) {
			cout << pt[i].id << " " << pt[n*2-i-1].id << endl;
		}
	}
}