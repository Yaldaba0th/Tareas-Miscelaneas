/*Punteros03.cpp*/
#include <iostream>
using namespace std;
auto cambiandoValor(int& dat) -> void{
	dat*=5;
}
int main(){
	auto dato1=22;
	cout <<"dato1= "<< dato1 << endl;
	cout <<"direccion de dato 1: " <<&dato1<<endl;
	cambiandoValor(dato1);
	cout <<"dato2= "<< dato1 << endl;
	cout <<"direccion de dato 1: " <<&dato1<<endl;
	return 0;
}
