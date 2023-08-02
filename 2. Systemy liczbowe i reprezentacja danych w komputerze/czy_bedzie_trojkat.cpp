#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c && a+c>b && b+c>a) cout<<"TAK\n";
	else cout<<"NIE\n";
	return 0;
}