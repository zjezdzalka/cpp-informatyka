#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n,m,w=0;
	cin>>n;
	m=n;
	while (m>0){
		w=w*10+m%10;
		m=m/10;
	}
	if(n==w)
		cout<<"TAK";
	else
		cout<<"NIE";
}
