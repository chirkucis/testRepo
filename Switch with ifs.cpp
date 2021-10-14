/*spend 10Eur - 5%
        20Eur - 10%
        35Eur - 15%
        50Eur - 20%
        70Eur - 25%
        100Eur - 30%*/
#include <iostream>
using namespace std;

int main(){
	float moneySpent;
	cout<<"How large was the purchase? ";
	cin>>moneySpent;
	if(moneySpent>100){
		cout<<"Your discount for next purchase is 30%";
	}else{
	 	if(moneySpent>70){
	 		cout<<"Your discount for next purchase is 25%";
		}else{
			if(moneySpent>50){
				cout<<"Your discount for next purchase is 20%";
			}else{
				if(moneySpent>35){
					cout<<"Your discount for next purchase is 15%";
				}else{
					if(moneySpent>20){
						cout<<"Your discount for next purchase is 10%";
					}else{
						if(moneySpent>10){
							cout<<"Your discount for next purchase is 5%";
						}else{
							cout<<"Your don't have a discount for next purchase";
						}
					}
				}
			}
		}
	}
}
