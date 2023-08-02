#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,suma=0,dwojka=1;
	cin>>n;
	while(n>0){
		suma += n%10 * dwojka;
		dwojka *= 2;
		n/=10;
	}
	cout<<suma;
	return 0;
}