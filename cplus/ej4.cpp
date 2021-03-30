/*ej4.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto defineLista(array<int,20> &v) ->void{
	srand(time(0));
	for(auto i = 0; i<20; i++){
		v[i] = 10+rand()%90 ;	
	}
	return;
}
auto leeValor() ->int{
	auto valor=0;
	cout<<"Ingrese entero entre 10 y 99: ";
	cin>>valor;
	while(valor<10 or valor>99){
		cout<<"Error!"<<endl;		
		cout<<"Ingrese entero entre 10 y 99: ";
		cin>>valor;
	}
	return valor;
}
auto buscaNumero(array<int,20> v, int valor) ->bool{
	auto esta= false;	
	for(auto i = 0; i<20; i++){
		if(v[i]==valor){
			esta=true;		
		}	
	}
	return esta;
}
auto imprimeResultado(bool result) ->void{
	if(result){
		cout<<"El valor ingresado existe en la lista de 20 valores!"<<endl;		
	}	
	else{
		cout<<"El valor ingresado no existe en la lista de 20 valores!"<<endl;		
	}	
	return;
}
auto imprimeLista(array<int,20> v) ->void{
	cout<<"Listado de numeros generados aleatoriamente: "<<endl;	
	for(auto i=0;i<19;i++){
		cout<<v[i]<<" ";	
	}
	cout<<v[19]<<endl;
	return;
}
auto main() ->int{
	array<int,20> Lista ={0};
	defineLista(Lista);
	auto numero = leeValor();
	auto resultado = buscaNumero(Lista,numero);
	imprimeResultado(resultado);
	imprimeLista(Lista);
	return 0;
}
