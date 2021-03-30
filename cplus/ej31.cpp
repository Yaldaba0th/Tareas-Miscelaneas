/*ej31.cpp*/
#include <iostream>
#include <string>
#include <array>
using namespace std;
struct Estudiante{
	string Nombre;
	string Apellido;
	string Rut;
	float Nota;
};
auto registraLista(array<Estudiante,2> &v) ->void{
	for(auto i=0;i<2;i++){
		cout<<"Nombre: ";
		cin>>v[i].Nombre;
		cout<<"Apellido: ";
		cin>>v[i].Apellido;
		cout<<"Rut: ";
		cin>>v[i].Rut;
		cout<<"Nota: ";
		cin>>v[i].Nota;
	}
	return;
}
auto imprimeListado(array<Estudiante,2> v) ->void{
	cout<<"Nombre        Apellido        Rut        Nota"<<endl;
	for (auto j=0;j<2;j++){
		cout<<v[j].Nombre<<"        "<<v[j].Apellido<<"        "<<v[j].Rut<<"        "<<v[j].Nota<<endl;
	}
	return;
}
auto main() ->int{
	array<Estudiante,2> Lista;
	registraLista(Lista);
	imprimeListado(Lista);
	return 0;
}
