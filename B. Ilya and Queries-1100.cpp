#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	string s;
	cin >> s;
	ll arr[100001];
	arr[0] = 0;
	ll k = 0;
	for (int i=1;i<s.size();i++){
		if (s[i]==s[i-1]){
			k++;
		}  
		arr[i] = k;
	}
	ll n;
	cin >> n;
	while(n--){
	    int a;
	    int b;
	    cin >> a >> b;
	    cout << arr[b-1] - arr[a-1] << endl;
	}
}