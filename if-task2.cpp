#include <iostream>
using namespace std;

int main(){
	int number;
	int digit1;
	int digit2;
	
	cout<<"Enter a 2 digit number: "<<endl;
	cin>>number;
	
	digit1 = number/10;
	digit2 = number - digit1*10;
	//digit2 = number%10;
	
	if (digit1 > digit2){
		cout<<"DESCENDING";
	}else{
		if(digit1 < digit2){
			cout<<"ASCENDING";
		}else{
			cout<<"MONOTONOUS";
		}
	}
}
