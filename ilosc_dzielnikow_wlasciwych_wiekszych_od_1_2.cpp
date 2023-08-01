#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, liczba_dzielnikow=0, dzielnik = 2;
	int i;
	cin>>n;
	while(dzielnik*dzielnik<n){
		if(n%dzielnik==0){
			liczba_dzielnikow += 2;
		}
		dzielnik++;
	}
	if(dzielnik * dzielnik == n)
		liczba_dzielnikow++;
	cout<<liczba_dzielnikow;
	return 0;
}