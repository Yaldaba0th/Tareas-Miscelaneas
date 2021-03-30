/*Estruc01.cpp*/
#include <iostream>
#include <string>
using namespace std;
struct Fruta{
	int Peso;
	float Precio;
};
auto leeKilo(Fruta &fru, string tipo) -> void{
	cout<<"Cuantos Kilos de "<<tipo<<" va a comprar ? ";
	cin>>fru.Peso;
	return;
}
auto leePrecio(Fruta &fru, string tipo) -> void{
	cout<<"Cual es el precio del kilo de "<<tipo<<" ? ";
	cin>>fru.Precio;
	return;
}
auto calculoCosto(Fruta fru, int &Suma) -> void{
	Suma= Suma+fru.Peso*fru.Precio;
}
auto imprimeResultado(int Suma) -> void{
	cout<<"El total a pagar es: $ "<<Suma<<endl;
}
auto main() -> int{
	auto Suma=0;
	Fruta Durazno;
	Fruta Platano;
	leeKilo(Durazno, "duraznos");
	leePrecio(Durazno, "duraznos");
	leeKilo(Platano, "platanos");
	leePrecio(Platano, "platanos");
	calculoCosto(Durazno,Suma);
	calculoCosto(Platano,Suma);
	imprimeResultado(Suma);
	return 0;
}
