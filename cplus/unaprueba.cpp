/*unaprueba.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto valorInicial() ->int{
	auto valor=0;	
	cout<<"Ingrese valor inicial entre 300 y 700: ";
	cin>>valor;
	while(valor>700 or valor<300){
		cout<<"Error de ingreso!";
		cout<<"Ingrese valor inicial entre 300 y 700: ";
		cin>>valor;
	}
	return valor;
}
auto defineMatriz(array<array<int,10>,5> &m,int ini) ->void{
	auto valor=ini;	
	for(auto j=9;j>=0;j--){
		if(j%2!=0){		
			for(auto i=4;i>=0;i--){
				m[i][j]=valor;			
				valor+=5;
			}
		}
		else{
			for(auto i=0;i<5;i++){
				m[i][j]=valor;			
				valor+=5;
			}			
		}	
	}
	return;
}
auto estaMatriz(array<array<int,10>,5> e,int number) ->bool{
	auto L=false;
		for(auto i=0;i<5;i++){		
			for(auto j=0;j<9;j++){
				if(e[i][j]==number){
					L=true;
				}
			}
		}
	return L;
}
auto buscaValor(array<array<int,10>,5> m) ->int{
	auto valor=0;	
	cout<<"Que valor desea buscar? ";
	cin>>valor;
	while(not(estaMatriz(m,valor))){
		cout<<"Valor ingresado no esta en matriz"<<endl;
		cout<<"Que valor desea buscar? ";
		cin>>valor;
	}
	return valor;
}
auto buscaPosicion(array<array<int,10>,5> m,int num,int &fil,int &col) ->void{
	for(auto i=0;i<5;i++){		
		for(auto j=0;j<10;j++){
			if(m[i][j]==num){
				fil=i;				
				col=j;
			}
		}
	}
}
auto imprimeMatriz(array<array<int,10>,5> m) ->void{
	for(auto i=0;i<5;i++){		
		for(auto j=0;j<9;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<m[i][9]<<endl;
	}
}
auto imprimeResultados(int num,int &fil,int &col) ->void{
	cout<<"El valor que usted busca, "<<num<<" se encuentra en la fila "<<fil<<" y la columna "<<col<<" de la matriz"<<endl;
}
auto main() ->int{
	array<array<int,10>,5> Matriz={0};
	auto inicio=valorInicial();
	defineMatriz(Matriz,inicio);
	auto numero = buscaValor(Matriz);
	auto posif=0;
	auto posic=0;
	buscaPosicion(Matriz,numero,posif,posic);	
	imprimeMatriz(Matriz);
	imprimeResultados(numero,posif,posic);
	return 0;
}
