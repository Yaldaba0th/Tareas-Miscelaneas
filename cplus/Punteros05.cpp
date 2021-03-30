/*Punteros05.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto dato1=22;
	auto* p1 = &dato1;
	auto dato2=(double)22/7;
	auto* p2 = &dato2;
	int* p3;
	string* p4 = NULL; //podria ser int*, float*
	cout <<"dato1= "<< dato1 << endl;
	cout <<"direccion de dato 1 "<<p1<<endl;
	cout <<"dato2= "<< dato2 << endl;
	cout <<"direccion de dato 2 "<<p2<<endl;
	cout <<"Contenido de p3: "<<p3<<endl;
	cout <<"Contenido de p4: "<<p4<<endl;
	*p1=40;
	cout<<"Valor de dato1 nuevamente: "<<dato1<<endl;
	return 0;
}
