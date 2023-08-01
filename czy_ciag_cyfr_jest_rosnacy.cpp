#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n[5];
	int i;
	for(i=0;i<5;++i)
		cin>>n[i];
	for(i=1;i<5;++i){
		if(n[i]<=n[i-1]){
			cout<<"NIE\n";
			return 0;
		}
	}
	cout<<"TAK\n";
	return 0;
}