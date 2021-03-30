/*pruebita2.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto valorInicial() ->int{
	auto valor=0;
	cout<<"Ingrese valor inicial entre 10 y 30: ";
	cin>>valor;
	while(valor<10 or valor>30){
		cout<<"Error de ingreso!"<<endl;		
		cout<<"Ingrese valor inicial entre 10 y 30: ";
		cin>>valor;
	}
	return valor;
}
auto defineMatriz(array<array<int,5>,6> &v, int ini) ->void{
	auto cont=ini;
	for(auto i = 0; i<6; i++){
		if (i%2==0){
			for(auto j = 0; j<5; j++){
				v[i][j] = cont ;
				cont+=1;
			}
		}
		else{
			for(auto j = 4; j>=0; j--){
				v[i][j] = cont ;
				cont+=1;
			}
		}
	}
	return;
}
auto buscaValor(array<array<int,5>,6> &v) ->int{
	auto valor=0;	
	cout<<"Ingrese valor quedesea buscar: ";	
	cin>>valor;
	while(valor<v[0][0] or valor>v[5][0]){
		cout<<"Error!"<<endl;		
		cout<<"Ingrese valor quedesea buscar: ";
		cin>>valor;	
	}
	return valor;
}
auto buscaPosicion(array<array<int,5>,6> &v,int valor, int &fila, int &col) ->void{
	for(auto i = 0; i<6; i++){
		for(auto j = 0; j<5; j++){
			if(v[i][j]==valor){
				fila=i;
				col=j;
			}
		}
	}
	return;
}
auto imprime(array<array<int,5>,6> &v) ->void{
	for(auto i = 0; i<6; i++){
		for(auto j = 0; j<4; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<v[i][4]<<endl;
	}	
}
auto imprimeResultado(int valor,int fila,int col) ->void{
	cout<<"El valor que usted busca, "<<valor<<" se encuentra en la fila "<<fila<<" y en la columna "<<col<<" de la matriz anterior."<<endl;
}
auto main() ->int{
	array<array<int,5>,6> Matriz ={0};
	auto inicio=valorInicial();
	defineMatriz(Matriz,inicio);
	auto numero =buscaValor(Matriz);
	auto posif=0;
	auto posic=0;
	buscaPosicion(Matriz,numero,posif,posic);
	imprime(Matriz);
	imprimeResultado(numero,posif,posic);
	return 0;
}
