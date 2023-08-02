#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string b;
	int d=0,i;
	cin>>b;
	for(i=0;i<b.size();++i){
		d *= 2;
		if(b[i] == '1'){
			d++;
		}
	}
	cout<<d<<"\n";
	return 0;
}