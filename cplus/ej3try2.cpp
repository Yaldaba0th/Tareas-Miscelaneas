/*ej32.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto leeNumeros(array<int,10> &v) ->void{
	for(auto i=0;i<10;i++){
		cout<<"Ingrese entero: ";
		cin>>v[i];	
	}
	return;
}
auto escribeNumeros(array<int,10> v) ->void{
	for(auto i=0;i<9;i++){
		cout<<v[i]<<" ";	
	}
	cout<<v[9]<<endl;
	return;
}
auto main() ->int{
	array<int,10> Arreglo={0};
	cout <<"Arreglo inicial:"<<endl;
	escribeNumeros(Arreglo);
	leeNumeros(Arreglo);
	cout<<"Arreglo final:"<<endl;
	escribeNumeros(Arreglo);
	return 0;
}
