/*arreglo0.cpp*/
#include <iostream>
using namespace std;
auto pasaValor(int v[]) ->void{
	for(auto i = 0;i<3;i++){
		v[i]+=20;	
	}
	return;
}
auto imprimeArreglo(int v[]) ->void{
	for(auto i = 0;i<3;i++){
		cout<<v[i]<<endl;	
	}
	return;
}
auto main() ->int{
	int arreglo[3]={5,10,15};
	cout <<"Valores iniciales del arreglo en main() = "<<endl;
	imprimeArreglo(arreglo);
	pasaValor(arreglo);
	cout<<endl;
	cout<<"Valores finales del arreglo en main(): " << endl;
	imprimeArreglo(arreglo);
	return 0;
}
