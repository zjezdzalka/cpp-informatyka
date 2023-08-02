#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	string imie;
	cin>>imie>>n;
	if(n>=18){
		cout<<"Dzien dobry "<<imie<<"\n";		
	}
	else{
		cout<<"Czesc "<<imie<<"\n";
	}
	return 0;
}