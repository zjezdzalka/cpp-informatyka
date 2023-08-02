#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,suma=0,dwojka=1;
	char test[14];
	for(int i=0;i<14;++i){
		cin>>n;
		suma=0;
		dwojka=1;
		while(n>0){
			suma += n%10 * dwojka;
			dwojka *= 2;
			n/=10;
		}
		test[i] = char(suma);
	}
	for(int i=0;i<14;++i){

		cout << test[i];
	}
	return 0;
}