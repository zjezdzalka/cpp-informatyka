#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int d;
	cin>>d;
	string b;
	while(d>0){
		if(d%2==0){
			b = '0' + b;
		}
		else{
			b = '1' + b;
		}
		d /= 2;
	}
	cout<<b<<"\n";
	return 0;
}