/*refuerzo02.cpp*/
#include <iostream>
#include <cstdlib>
using namespace std;
auto lanzamiento() ->int{
	int l = 1+rand()%6;
	cout<<"Lanza dado: "<<l<<endl;
	return l;
}
auto lanzaDados(int &s) ->void{
	auto d1=lanzamiento();
	auto d2=lanzamiento();
	s=d1+d2;
	while (s%4!=0){
		cout<<"Suma no valida, repite lanzamiento."<<endl;
		auto d1=lanzamiento();
		auto d2=lanzamiento();
		s=d1+d2;
	}
	return;
}
auto imprimeSuma(int &s) ->void{
	cout<<"Suma es "<<s<<" y cumple."<<endl; 
	return;
}
auto main() ->int{
	auto suma=0;
	lanzaDados(suma);
	imprimeSuma(suma);
	return 0;
}
