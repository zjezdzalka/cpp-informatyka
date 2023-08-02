#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string wyraz;
	cin>>wyraz;
	int i;
	for(i=1;i<wyraz.size();++i){
		if(wyraz[i] == wyraz[i-1]){
			cout<<"TAK\n";
			return 0;
		}
	}
	cout<<"NIE\n";
	return 0;
}