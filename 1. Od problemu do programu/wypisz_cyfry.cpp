#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin>>n;
	while(n>0){
		cout<<n%10<<"\n";
		n/=10;
	}
	return 0;
}