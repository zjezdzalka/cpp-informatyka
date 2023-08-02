#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, liczba_dzielnikow=0;
	int i;
	cin>>n;
	for(i=2; i<n/2; ++i){
		if(n%i==0){
			liczba_dzielnikow++;
		}
	}
	cout<<liczba_dzielnikow;
	return 0;
}