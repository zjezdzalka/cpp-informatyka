#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin>>n;
	int sum = 0;
	while(n>0){
		if(n%2 == 1){
			sum++;
		}
		n /= 2;
	}
	cout<<sum;
	return 0;
}