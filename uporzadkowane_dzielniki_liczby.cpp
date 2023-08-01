#include<bits/stdc++.h>
long long zapis[110];
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, ld=0;
	int i, a=0;
	cin>>n;
	cout<<"1, ";
	for(i=2;i<sqrt(n);++i){
		if(n%i == 0){
			cout << i <<", ";
			zapis[a] = n/i;
			a++;
		}
	}
	if(i * i == n){
		cout<<i<<", ";
	}
	for(a=a-1;a>=0;--a){
		cout << zapis[a] <<", ";
	}
	cout<<n<<", ";
	return 0;
}