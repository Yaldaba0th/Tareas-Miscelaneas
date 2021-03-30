/*radgra.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto rad=0.0;
	auto gra=0.0;
	cout<<"Ingrese rad a convertir ";
	cin >> rad;	
	while(rad<0){
		cout<<"Error" << endl;
		cout<<"Ingrese temperatura a convertir ";	
		cin >> rad;
	}
	gra=rad*(180.0/3.1415);
	cout<<"Equivalen a " << gra <<"°" << endl;
	return 0;
}
