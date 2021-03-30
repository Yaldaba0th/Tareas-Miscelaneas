/*funcion04.cpp*/
#include <iostream>
using namespace std;
auto veces=0;
void leeVeces(){
	cout << "Ingrese veces"<<endl;	
	cin >>veces;
	while(veces<2){
		cout << "Error!"<<endl;	
		cout << "Ingrese veces"<<endl;	
		cin >>veces;	
	}
	return;
}
void repetidorPalabra(){
	for(auto i=0;i<veces; i++){
		cout<<"Hola"<<endl;
	}
}
int main(){
	leeVeces();
	repetidorPalabra();
	return 0;
}
