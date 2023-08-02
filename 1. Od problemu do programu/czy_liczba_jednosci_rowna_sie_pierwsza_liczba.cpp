#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,temp=0;
	cin>>n;
	temp = n%10;
	while(n>10){
		n /= 10;
	}
	if(temp == n%10)
		cout<<"TAK";
	else
		cout<<"NIE";
	return 0;
}