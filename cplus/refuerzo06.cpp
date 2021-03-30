/*refuerzo06.cpp*/
#include <iostream>
#include <array>
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
auto leeFrases(array<string,3> &f) ->void{
	for(auto i=0;i<3;i++){
		cout<<"Ingrese frase: ";
		getline(cin,f[i]);
		while(f[i].length()==0 or soloBlancos(f[i])){
			if(f[i].length()==0){
				cout<<"Error! Nada ingreso"<<endl;
			}			
			else if(soloBlancos(f[i])){
				cout<<"Error! Ingreso solo blancos"<<endl;
			}
			cout<<"Ingrese frase: ";
			getline(cin,f[i]);
		}
	}
	return;
}
auto cambiaFrases(array<string,3> &f,array<string,3> &c) ->void{
	for(auto i=0;i<3;i++){
		for(auto j=0;j<f[i].length()-1;j++){
			c[i]+=f[i].substr(j,1)+"*";
		}
		c[i]+=f[i][f[i].length()-1];
	}
	return;
}
auto imprimeFrases(array<string,3> &f,array<string,3> &c) ->void{
	cout<<" Original -- Cambio"<<endl;	
	for(auto i=0;i<3;i++){
		cout<<f[i]<<" -- "<<c[i]<<endl;
	}
	return;
}
auto main() ->int{
	array<string,3> frases;
	array<string,3> cambios;
	leeFrases(frases);
	cambiaFrases(frases,cambios);
	imprimeFrases(frases,cambios);
	return 0;
}
