#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long a,b,c;
	cin>>a>>b>>c;
	if(c>a){
		swap(a,c);
	}
	if(b>a){
		swap(a,b);
	}
	if(b+c>a) cout<<"TAK\n";
	else cout<<"NIE\n";
	return 0;
}