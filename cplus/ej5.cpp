/*ej5.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto defineMatriz(array<array<int,3>,4> &v) ->void{
	srand(time(0));
	for(auto i = 0; i<4; i++){
		for(auto j = 0; j<3; j++){
			v[i][j] = 10+rand()%90 ;
		}
	}
	return;
}
auto sumaFila(array<array<int,3>,4> v, array<int,4> &s) ->void{
	for(auto i = 0; i<4; i++){
		auto suma=0;
		for(auto j = 0; j<3; j++){
			suma+=v[i][j];
		}
		s[i]=suma;
	}
	return;
}
auto imprimeResultado(array<array<int,3>,4> v, array<int,4> s) ->void{
	for(auto i = 0; i<4; i++){
		for(auto j = 0; j<3; j++){
			cout<<v[i][j]<<" ";
		}
		cout<<"| " <<s[i]<<endl;
	}	
}
auto main() ->int{
	array<array<int,3>,4> Matriz ={0};
	array<int,4> Columna={0};
	defineMatriz(Matriz);
	sumaFila(Matriz, Columna);
	imprimeResultado(Matriz, Columna);
	return 0;
}
