#include<bits/stdc++.h>
using namespace std;
bool check(long long n){
	return n%2==0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin>>n;
	if(check(n))
		cout<<"Parzysta";
	else
		cout<<"Nieparzysta";
	return 0;
}