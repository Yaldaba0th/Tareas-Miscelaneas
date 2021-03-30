/*string01.cpp*/
#include <iostream>
#include <cstring>
using namespace std;
auto leeFrase(char f[]) ->void{
	cout <<"Ingrese frase de longitud no mayor a 20 caracteres: ";
	cin.getline(f,50);
	while(not(strlen(f) > 0 and strlen(f) <21)){
		cout << "Frase invalida!!" <<endl;
		if(strlen(f)==0){
			cout<<"No ingreso frase!!" <<endl;		
		}	
		else{
			cout<<"Frase excede los 20 caracteres!!" <<endl;		
		}
		cout <<"Ingrese frase de longitud no mayor a 20 caracteres: ";
		cin.getline(f,50);	
	}
	return;
}
auto imprimeFrase(char f[]) ->void{
	char s1[]= "Frase valida ingresada: ";
	cout << strcat(s1,f) <<endl;
	return;
}
auto main() ->int{
	char frase[51];
	leeFrase(frase);
	imprimeFrase(frase);
	return 0;
}
