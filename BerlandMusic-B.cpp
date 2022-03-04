#include<bits/stdc++.h>
#include<ctype.h>
using namespace std;
int main() {
	int f;
	cin>>f;
	while(f--) {
		int n;
		cin>>n;
		vector<pair<int , int > > vec(n);
		for(int j=0;j<n;j++) {
			cin>>vec[j].first,vec[j].second=j;
		}
			string str;
			cin>>str;
			sort(vec.begin(),vec.end());
			
		int kq=n;
		for(int i=n-1;i>=0;i--) {
			if(str[vec[i].second]=='1') {
				vec[i].first=kq;
				kq--;
			}
		}
		for(int j=n-1;j>=0;j--) {
			if(str[vec[j].second]=='0') {
				vec[j].first=kq;
				kq--;
			}
		}
		for(int k=n-1;k>=0;k--) {
			swap(vec[k].first,vec[k].second);
		}
		sort(vec.begin(),vec.end());
		for(int i=0;i<n;i++) {
			cout<<vec[i].second<<" ";
		}
		cout<<endl;
	}
}
