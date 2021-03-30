/*ej311.cpp*/
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
	auto frase=f;	
	auto cont=0;
	while(frase.find(o)!=-1){
		cont+=1;
		frase=frase.substr(frase.find(o)+o.length()-1,frase.length()-1);
	}	
	return cont;
}
auto fraseFinal(string f,string o,string r,int num) ->void{
	auto frase=f;
	auto pos=0;
	for(auto i=0;i<num;i++){
		auto pos=frase.find(o);
		frase= frase.replace(pos,o.length(),r);
	}
	cout <<"Nueva frase:"<<endl;	
	cout<<frase<<endl;
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
