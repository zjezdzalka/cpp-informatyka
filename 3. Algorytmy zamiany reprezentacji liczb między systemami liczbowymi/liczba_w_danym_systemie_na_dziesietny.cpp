#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int d=0,i,p;
	string s;
	cin>>p>>s;
	for(i=0; i<s.size();++i){
		d=d*p+s[i]-'0';
	}
	cout<<d;
	return 0;
}