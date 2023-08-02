#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string b;
	int potega=1,d=0,i;
	cin>>b;
	for(i=b.size()-1;i>=0;--i){
		if(b[i] == '1'){
			d += potega;
		}
		potega *= 2;
	}
	cout<<d<<"\n";
	return 0;
}