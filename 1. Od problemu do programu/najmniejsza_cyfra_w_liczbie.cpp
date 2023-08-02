#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin>>n;
	int i = n%10;
	while(n>0){
		if(n%10 <= i){
			i = n%10;
		}
		n /= 10;
	}
	cout<<i;
	return 0;
}