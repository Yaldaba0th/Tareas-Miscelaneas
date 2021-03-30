/*Estruc02.cpp */
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
auto leeDatos(Estudiante &estu) -> void{
	cout << "Nombre? ";
	cin >> estu.Nombre;
	cout << "Apellido? ";
	cin >> estu.Apellido;
	cout << "Rut? ";
	cin >> estu.Rut;
	cout << "Nota? ";
	cin >> estu.Nota;
	return;
}
auto registraLista(array<Estudiante,2> &L)-> void{
	for(int i = 0; i < 2; i++){
		leeDatos(L[i]);
	}
	return;
}
auto imprimeListado(array<Estudiante,2> L)-> void{
	cout.width(10);
	cout << left << "Nombre";
	cout.width(10);
	cout << left << "Apellido";
	cout.width(15);
	cout << left << "Rut";
	cout.width(5);
	cout << right << "Nota" << endl;
	for(int i = 0; i < 2; i++){
		cout.width(10);cout << left << L[i].Nombre;
		cout.width(10);cout << left << L[i].Apellido;
		cout.width(15);cout << left << L[i].Rut;
		cout.width(5); cout.setf(ios::fixed);
		cout.precision(1); cout << right << L[i].Nota << endl;
	}
} 
auto main() -> int{
	array<Estudiante,2> Lista;
	registraLista(Lista);
	imprimeListado(Lista);
	
	return 0;
}

