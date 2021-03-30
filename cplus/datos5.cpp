/*datos5.cpp*/
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
	if(argc !=3){
	cout << "Numero de ingresos invalidos" << endl;
	exit(1);
	}
	cout << "Hola, " << argv[1] << ", ingresaste el valor " << argv[2] << " para el lado del cuadrado" << endl;
	int lado = stoi(argv[2]);	
	if(lado<=4 or lado%2==0){
		cout << "Lado no valido fin del programa" << endl;
		exit(1);
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
