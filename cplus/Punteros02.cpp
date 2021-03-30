/*Punteros02.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto dato1=22;
	auto& dato2 = dato1;
	cout <<"dato1= "<< dato1 << endl;
	cout <<"direccion de dato 1: " <<&dato1<<endl;
	cout <<"dato2= "<< dato2 << endl;
	cout <<"direccion de dato 1: " <<&dato2<<endl;
	return 0;
}
