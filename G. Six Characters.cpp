#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	stringstream st(s);
	string let;
	string go="";
	while(st >> let) {
		go+=let[0];
	}
	cout << go;
}