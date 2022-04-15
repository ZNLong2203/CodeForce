#include<bits/stdc++.h>
#define ll long long
using namespace std;	
int main() {
	int n;
    cin >> n;
    vector<int>v = { 1200,1400,1600,1900,2100,2300,2400,2600,3000 };
    map<int, int>mp;
    lower_bound(v.begin(), v.end(), n) - v.begin();
    int index = lower_bound(v.begin(), v.end(), n) - v.begin();
    for (auto& i : v) {
        mp[i] = 1;
    }
    if (mp[n]) {
        cout << v[index + 1];
    }
    else {
        cout << v[index];
    }
}