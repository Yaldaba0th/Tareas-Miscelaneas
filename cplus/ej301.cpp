/*ej301.cpp*/
#include <iostream>
#include <string>
using namespace std;
auto leeFrase(string f) ->string{
	string frase="";
	cout <<f;
	getline(cin,frase);
	while(frase.length() <= 0){
		cout << "No ingreso informacion debe repetir ingreso!" <<endl;
		cout <<f;
		getline(cin,frase);
	}
	return frase;
}
auto buscaOcurrencia(string f,string o) ->int{
	auto num=f.find(o);
	if num
	return num;
}
auto fraseFinal(string f,string o,string r,int num) ->void{
	cout <<"Nueva frase:"<<endl;	
	f= f.replace(num,o.length(),r);
	cout<<f<<endl;
	return;
}
auto main() ->int{
	auto frase=leeFrase("Ingrese frase: ");
	auto ocurrencia = leeFrase("Ingrese palabra a buscar: ");
	auto reemplazo = leeFrase("Ingrese sustitucion: ");
	auto numero = buscaOcurrencia(frase, ocurrencia);
	fraseFinal(frase,ocurrencia,reemplazo,numero);
	return 0;
}
