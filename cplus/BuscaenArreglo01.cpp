/*BuscaenArreglo01.cpp*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <array>
using namespace std;
auto azar() -> int{
	int valor = rand()%20 + 10;
	return valor;
}
auto estaEn(array<int,10> v,int val) -> bool{
	auto i = 0;
	auto encontrado = false;
	while(not encontrado and i < 10){
		if(v[i] == val){
			encontrado = true;
		}
		i += 1;
	}
	return encontrado;
}
auto generaElemento(int &val) -> void{
	cout << "Elemento a buscar: ";
//	srand(time(0));
	val = azar();
	cout << val << endl;
	return;
}
auto crea6Elementos(array<int,10> &v) -> void{
	srand(time(0));
	cout << "Elementos del arreglo: " << endl;
	for(auto i = 0; i < 10; i++){
		v[i] = azar();
		cout << v[i] << " ";
	}
	cout << endl;
	return;
}
auto main() -> int{
	auto val = 0;
	auto encuentra = false;
	array<int, 10> arreglo = {};
	crea6Elementos(arreglo);
	generaElemento(val);
	encuentra = estaEn(arreglo,val);
	cout << "El elemento " << val;
	if(encuentra){
		cout << " se ";
	}
	else{
		cout << " no se ";
	}
	cout << "encontró en el arreglo" << endl;
	return 0;
}
