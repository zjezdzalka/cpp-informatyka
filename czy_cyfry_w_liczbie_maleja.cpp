#include<bits/stdc++.h>
// ewentualnie 
//#include<iostream>
//#include<algorhitm>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin>>n;
	int i = n%10;
	n /= 10;
	while(n>0){
		if(i >= n%10){
			cout << "NIE\n";
			return 0;
		}
		i = n%10;
		n /= 10;
	}
	cout << "TAK\n";
	return 0;
}