/*arreglo00.cpp*/
#include <iostream>
#include <array>
using namespace std;
array<int,3> arreglo ={5,10,15};
auto pasaValor() ->void{
	for(int &va:arreglo){
		va*=5;	
	}
	return;
}
auto imprimeArreglo() ->void{
	for(int va: arreglo){
		cout<<va<<endl;	
	}
	return;
}
auto main() ->int{
	cout <<"Valores iniciales del arreglo en main() = "<<endl;
	imprimeArreglo();
	pasaValor();
	cout<<endl;
	cout<<"Valores finales del arreglo en main(): " << endl;
	imprimeArreglo();
	return 0;
}
