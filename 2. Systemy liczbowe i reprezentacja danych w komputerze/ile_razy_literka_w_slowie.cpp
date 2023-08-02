#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	char literka;
	string slowo;
	cin>>slowo>>literka;
	int ile=0,i;
	for(i=0;i<slowo.size();++i){
		if(slowo[i] == literka){
			++ile;
		}
	}
	cout<<ile<<"\n";
}