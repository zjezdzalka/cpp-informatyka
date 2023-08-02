#include<bits/stdc++.h>
//mnozenie w slupku tak naprawde, tylko ze c++
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string b;
	long long c=1,suma=0, a;
	int i,temp;
	cin>>a>>b;
	for(i=b.size()-1;i>=0;--i){
		temp = b[i] - '0';
		suma += a * temp * c;
		c *= 10;
	}
	cout<<suma;
}