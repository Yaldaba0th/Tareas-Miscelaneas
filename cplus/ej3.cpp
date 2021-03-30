/*ej3.cpp*/
#include <iostream>
using namespace std;
auto leeNumeros(int v[]) ->void{
	for(auto i=0;i<10;i++){
		cout<<"Ingrese entero: ";
		cin>>v[i];	
	}
	return;
}
auto escribeNumeros(int v[]) ->void{
	for(auto i=0;i<9;i++){
		cout<<v[i]<<" ";	
	}
	cout<<v[9]<<endl;
	return;
}
auto main() ->int{
	int Arreglo[10]={0};
	cout <<"Arreglo inicial:"<<endl;
	escribeNumeros(Arreglo);
	leeNumeros(Arreglo);
	cout<<"Arreglo final:"<<endl;
	escribeNumeros(Arreglo);
	return 0;
}
