/*datos4.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto lado=0;
	cout<< "Ingrese rectangulo, debe ser positivo mayor que 4 e impar: ";
	cin >> lado;
	while(lado <=4 or lado%2!=1){
	cout<< "Error! Intente otra vez! ";
	cout<< "Ingrese rectangulo, debe ser positivo mayor que 4 e impar: ";
	cin >> lado;	
	}
	for(auto fila=1; fila<=lado; fila++){
		for(auto col=1; col<=lado;col++){
			if(col==lado){
				cout<< "*" << endl;
			}
			else{
				if(fila==1 or fila==lado or col==1){
					cout<< "* ";
				}
				else{
					cout<< "  ";
				}
			}
		}
	}
	
	return 0;
}
