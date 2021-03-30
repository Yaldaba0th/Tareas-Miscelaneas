/*factorial1.cpp*/
#include <iostream>
using namespace std;
auto leeNumero() ->int{
	auto num=0;
	cout<<"Ingrese numero: ";
	cin>>num;
	while(num<0){
		cout<<"Error!";
		cout<<"Ingrese numero: ";
		cin>>num;
	}
	return num;
}
auto factorialR(int num) ->long{
	long resul=0;
	if(num==0){
		resul=1;
	}
	else{
		resul=num*factorialR(num-1);	
	}
	return resul;
}
auto imprimeResultado(int num,int resul) ->void{
	cout<<"Factorial de "<<num<<" es "<<resul<<endl;
	return;
}

auto main() ->int{
	auto numero = leeNumero();
	auto valor=factorialR(numero);
	imprimeResultado(numero,valor);
	return 0;
}
