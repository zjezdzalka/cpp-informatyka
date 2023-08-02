#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	string test;
	int n,pierwsza_minimalna=0,druga_minimalna=0,maksymalna_wartosc=0,liczba;
	cin>>n;
	while(n>0){
		cin >> liczba;
		if(pierwsza_minimalna == 0){
			pierwsza_minimalna == liczba;
		}
		
		if(pierwsza_minimalna >= liczba && druga_minimalna == 0){
			druga_minimalna = pierwsza_minimalna;
			pierwsza_minimalna = liczba;
		}
		else if(pierwsza_minimalna >= liczba && druga_minimalna != 0){
			pierwsza
		}
		else{
			druga_minimalna = liczba;
		}
		
		if(druga_minimalna>=liczba && maksymalna_wartosc == 0){
			maksymalna_wartosc = druga_minimalna;
			druga_minimalna = liczba;
		}
		else{
			maksymalna_wartosc = liczba;
		}
		
		if(pierwsza_minimalna > druga_minimalna){
			swap(pierwsza_minimalna, druga_minimalna);
		}
		if(druga_minimalna > maksymalna_wartosc){
			swap(maksymalna_wartosc, druga_minimalna);
		}
		if(liczba > maksymalna_wartosc){
			maksymalna_wartosc = liczba;
		}
		
		n--;
	}
	if((pierwsza_minimalna + druga_minimalna) <= maksymalna_wartosc)
		cout<<"TAK\n";
	else
		cout<<"NIE\n";
	return 0;
}