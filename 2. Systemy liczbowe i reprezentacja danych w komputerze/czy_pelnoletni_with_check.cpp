#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	return n >= 18;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	string imie;
	cin>>imie>>n;
	if(check(n)){
		cout<<"Dzien dobry "<<imie<<"\n";		
	}
	else{
		cout<<"Czesc "<<imie<<"\n";
	}
	return 0;
}