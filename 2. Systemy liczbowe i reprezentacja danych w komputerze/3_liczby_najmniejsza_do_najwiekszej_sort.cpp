#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n[3];
	int i;
	for(i=0;i<3;++i){
		cin>>n[i];
	}
	sort(n,n+3);
	for(i=0;i<3;++i){
		cout<<n[i]<<" ";
	}
	return 0;
}