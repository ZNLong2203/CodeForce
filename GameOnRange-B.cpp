#include<bits/stdc++.h> 
#define ll long long
#define xd '\n'
using namespace std;
map<pair<int,int>,int>ans;
map<pair<int,int>,bool>mp;
pair<int,int> a[10000];
void giai(int s,int n) {
	if(s==n) {
		ans[{s,n}]=s;
		return;
	}
	for(int i=s;i<=n;i++) {
		if(i=s) {
			if(mp[{i+1,n}]) {
				ans[{s,n}]=i;
				giai(i+1,n);
				break;
			}
		}	else if(i==n) {
			if(mp[{s,i-1}]) {
				ans[{s,n}]=i;
				giai(s,i-1);
				break;
			}
		}	else {
			if(mp[{s,i-1}]&&mp[{i+1,n}]) {
				ans[{s,n}]=i;
				giai(s,i-1);
				giai(i+1,n);
				break;
			}
		}
 	}
}

void kq() {
	int xet;
	cin >> xet;
	ans.clear();
	mp.clear();
	int s=1,n=xet;
	for(int i=0;i<xet;i++) {
		cin >> a[i].first >> a[i].second;
		mp[{a[i].first,a[i].second}]=true;
	}
	giai(s,n);
	for(auto it : mp) {
		if(ans[it.first]) {
			cout<<it.first.first<< " " <<it.first.second << " " << ans[it.first]<<xd;
		}
	}
	cout<<xd;
}
int main() {
	int f;
	cin>>f;
	while(f--) {
		kq();
	}
}
