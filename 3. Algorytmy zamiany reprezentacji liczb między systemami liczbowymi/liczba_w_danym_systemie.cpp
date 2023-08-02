#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int d=0,i,p;
	string s;
	cin>>d>>p;
	while(d>0){
		i = d%p;
		if(i<10){
			s=char('0'+i)+s;
		}
		else{
			s=char('A'-10+i)+s;
		}
		d /= p;
	}
	cout<<"System"<<p<<"\n"<<s<<"\n";
	return 0;
}