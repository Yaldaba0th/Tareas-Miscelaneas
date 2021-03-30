/*Punteros04.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto dato1=22;
	auto* p1 = &dato1;
	cout <<"dato1= "<< dato1 << endl;
	cout <<"direccion de dato 1 ";
	cout <<"guardada en p1: "<<p1<<endl;;
	cout <<"direccion de dato 1 ";
	cout <<"usando &: " <<&dato1<<endl;
	return 0;
}
