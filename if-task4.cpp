#include <iostream>
using namespace std;

int main(){
	int linijaA, linijaB, linijaC;
	
	cout<<"Ievadi tris lîniju garumus: "<<endl;
	cin>>linijaA;
	cin>>linijaB;
	cin>>linijaC;
	
	if(linijaA+linijaC > linijaB){
		if(linijaA+linijaB > linijaC){
			if(linijaB+linijaC > linijaA){
				cout<<"Sis linijas var izveidot trijsturi.";
			}else{
				cout<<"Nevar izveidot trijsturi.";
			}
		}else{
			cout<<"Nevar izveidot trijsturi.";
		}
	}else{
		cout<<"Nevar izveidot trijsturi.";
	}
}
