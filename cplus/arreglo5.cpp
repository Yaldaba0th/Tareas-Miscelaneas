/*arreglo5.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto pasaValor(array<int,3> &v) ->void{
	for(auto i = 0;i<3;i++){
		v[i]+=20;	
	}
	return;
}
auto imprimeArreglo(array<int,3> v) ->void{
	for(auto i = 0;i<3;i++){
		cout<<v[i]<<endl;	
	}
	return;
}
auto main() ->int{
	array<int,3> arreglo={5,10,15};
	cout <<"Valores iniciales del arreglo en main() = "<<endl;
	imprimeArreglo(arreglo);
	pasaValor(arreglo);
	cout<<endl;
	cout<<"Valores finales del arreglo en main(): " << endl;
	imprimeArreglo(arreglo);
	return 0;
}
