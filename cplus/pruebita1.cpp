/*pruebita1.cpp*/
#include <iostream>
using namespace std;
auto minimoX() -> int{
	auto min=0;
	cout <<"Ingrese valor minimo de X: ";
	cin>>min;
	while(min<=0){
		cout <<"Ingreso no valido!! "<<endl;
		cout <<"Ingrese valor minimo de X: ";
		cin>>min;	
	}
	return min;
}
auto maximoX(int &min) -> int{
	auto max=0;
	cout <<"Ingrese valor maximo de X: ";
	cin>>max;
	while(max<=min){
		cout <<"Valor maximo no puede ser igual o inferior a valor minimo!! "<<endl;
		cout <<"Ingrese valor maximo de X: ";
		cin>>max;	
	}
	return max;
}
auto imprimeFuncion(int &min, int &max) -> void{	
	auto y=0;
	cout<<" x        f(x)"<<endl;
	for(auto i=min;i<=max;i++){
		y=(i*i)-(6*i)+5;
		if(i<10){
		cout<<"0"<<i<<"        "<<y<<endl;
		}
		else{
		cout<<i<<"        "<<y<<endl;
		}
	}	
	return;
}
auto main() ->int{
	auto min = minimoX();
	auto max= maximoX(min);
	imprimeFuncion(min,max);
	return 0;
}
