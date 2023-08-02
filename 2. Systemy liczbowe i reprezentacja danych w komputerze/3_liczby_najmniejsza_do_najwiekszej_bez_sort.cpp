#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a,b,c;
	int i;
	cin>>a>>b>>c;
	if(a>b){
		swap(a,b);
	}
	if(a>c){
		swap(c,a);
	}
	if(b>c){
		swap(c,b);
	}
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
	return 0;
}