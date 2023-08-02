#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	if(b>a || c>a){
		if(b>a)
			swap(a,b);
		if(c>a)
			swap(a,c);
	}
	if((b+c)>a)
		cout<<"TAK\n";
	else cout<<"NIE\n";
	return 0;
}