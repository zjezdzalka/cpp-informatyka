#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n;
	cin>>n;
	while(n>0){
		if(n%2 == 1 ){
			cout << "NIE\n";
			return 0;
		}
		n /= 10;
	}
	cout << "TAK\n";
	return 0;
}