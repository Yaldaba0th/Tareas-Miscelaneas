/*ej41.cpp*/
#include <iostream>
#include <string>
using namespace std;
auto soloBlancos(string frase) ->bool{
	auto L=true;
	for(auto i=0;i<(frase.length());i++){
		if(frase.substr(i,1)!=" "){
			L=false;
		}
	}
	return L;
}
auto leeFrases(string &f) ->void{
		cout<<"Ingrese frase con no mas de 10 caracteres: ";
		getline(cin,f);
		while(f.length()>10 or f.length()==0 or soloBlancos(f)){
			if(f.length()>10){
				cout<<"Error! Mas de 10 caracteres"<<endl;
			}	
			else if(f.length()==0){
				cout<<"Error! Nada ingreso"<<endl;
			}			
			else if(soloBlancos(f)){
				cout<<"Error! Ingreso solo blancos ("<<f.length()<<" blancos)"<<endl;
			}
			cout<<"Ingrese frase con no mas de 10 caracteres: ";
			getline(cin,f);
	}
	return;
}
auto imprimeDirecciones(string frase) ->void{
	auto* p= &frase;
	for(auto i=0;i<(frase.length());i++){
		cout<<"Direccion de "<<frase.substr(i,1)<<" es: ";
		cout<<p<<endl;
		p++;		
	}
	return;
}
auto main() ->int{
	string frase;
	leeFrases(frase);
	imprimeDirecciones(frase);
	return 0;
}
