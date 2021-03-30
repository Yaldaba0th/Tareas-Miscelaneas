/*fibonacci.cpp*/
#include <iostream>
using namespace std;
auto leeElementos() ->int{
	auto num=0;
	cout<<"Ingrese numero de elementos a mostrar: ";
	cin>>num;
	while(num<=0){
		cout<<"Debe repetir el ingreso!"<<endl;
		cout<<"Ingrese numero de elementos a mostrar: ";
		cin>>num;
	}
	return num;
}
auto fibonacciR(int num) ->long{
	long resul=0;
	if(num==0){
		resul=0;
	}
	else if(num==1){
		resul=1;
	}
	else{
		resul=fibonacciR(num-1)+fibonacciR(num-2);	
	}
	return resul;
}
auto main() ->int{
	auto numero=leeElementos();
	for(auto i=0;i<numero-1;i++){
		cout<<fibonacciR(i)<<", ";
	}
	cout<<fibonacciR(numero-1)<<endl;
	return 0;
}
