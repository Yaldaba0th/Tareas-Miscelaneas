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
	cout<<"Nombre          Apellido          Rut            Nota"<<endl;
	string f="Nombre          Apellido          Rut            ";
	string fs="                                                 ";
	for (auto j=0;j<2;j++){
		string frase=fs;
		frase= frase.replace(f.find("Nombre"),(v[j].Nombre).length(),v[j].Nombre);
		frase= frase.replace(f.find("Apellido"),(v[j].Apellido).length(),v[j].Apellido);
		frase= frase.replace(f.find("Rut"),(v[j].Rut).length(),v[j].Rut);
		cout<<frase;
		cout.setf(ios::fixed);
		cout.precision(1);
		cout<<v[j].Nota<<endl;
	}
	return;
}
auto main() ->int{
	array<Estudiante,2> Lista;
	registraLista(Lista);
	imprimeListado(Lista);
	return 0;
}
