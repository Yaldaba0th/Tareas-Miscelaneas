/*funcion06.cpp*/
#include <iostream>
using namespace std;
auto numero=0;
int leeVeces();
void repetidorPalabra();
int main(){
	numero=leeVeces();
	repetidorPalabra();
	return 0;
}
int leeVeces(){
	auto numero=0;
	cout << "Ingrese veces"<<endl;	
	cin >>numero;
	while(numero<2){
		cout << "Error!"<<endl;	
		cout << "Ingrese veces"<<endl;	
		cin >>numero;	
	}
	return numero;
}
void repetidorPalabra(){
	for(auto i=0;i<numero; i++){
		cout<<"Hola"<<endl;
	}
	return;
}
