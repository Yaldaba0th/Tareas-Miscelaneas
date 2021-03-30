/*funcion08.cpp*/
#include <iostream>
using namespace std;
void pasaValor(int &v){
	v=v+20;
	cout <<"valor en la funcion: "<<v<<endl;
	return;
}
auto numero=0;
int leeVeces();
void repetidorPalabra();
int main(){
	auto v=10;
	pasaValor(v);
	cout <<"valor en main(): "<<v<<endl;
	return 0;
}
