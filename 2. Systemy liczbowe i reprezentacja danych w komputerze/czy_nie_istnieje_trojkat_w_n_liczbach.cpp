#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string test;
	int n,i;
	cin>>n;
	int liczby[n];
	for(i=0;i<n;++i){
		cin>>liczby[i];
	}
	sort(liczby,liczby+n);
	if((liczby[0] + liczby[1]) <= liczby[n-1])
		cout<<"TAK\n";
	else
		cout<<"NIE\n";
	return 0;
}