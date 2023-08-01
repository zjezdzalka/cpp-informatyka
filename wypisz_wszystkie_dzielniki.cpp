#include<bits/stdc++.h>

using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, ld=0;
	int i;
	cin>>n;
	for(i=2;i<sqrt(n);++i){
		if(n%i == 0)
			cout << i <<", "<<n/i<<", ";
	}
	if(i * i == n){
		cout<<i<<", ";
	}
	cout<<"1, "<<n<<", ";
	return 0;
}