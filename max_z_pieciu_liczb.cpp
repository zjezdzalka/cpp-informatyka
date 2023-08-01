#include<bits/stdc++.h>
// ewentualnie 
//#include<iostream>
//#include<algorhitm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n[5];
	int i;
	for(i=0;i<5;++i)
		cin>>n[i];
	cout<<max(n[0],n[4]);
	return 0;
}