#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string test;
	char temp;
	cin>>test;
	int i,j;
	for(i=0;i<test.size();++i){
		temp = test[i];
		for(j=i+1;j<test.size();++j){
			if(test[j] == temp){
				cout<<"TAK\n";
				return 0;
			}
		}
	}
	cout<<"NIE\n";
	return 0;
}