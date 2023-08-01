#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long c=1,suma=0, a;
	long long i,b,temp;
	cin>>a>>b;
	while(b>0){
		temp = b%10;
		suma += a * temp * c;
		c *= 10;
		b /= 10;
	}
	cout<<suma;
}