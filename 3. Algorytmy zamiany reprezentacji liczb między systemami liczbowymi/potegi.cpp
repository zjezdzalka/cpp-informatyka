#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long y=1;
	long long x,n,potega;
	cin>>x>>n;
	potega = x;
	while(n>0){
		if(n%2==1){
			y *= potega;
		}
		n/=2;
		if(n>0){
			potega *= potega;
		}
	}
	cout<<y<<"\n";
	return 0;
}