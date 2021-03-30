/*string4x.cpp*/
#include <iostream>
#include <string>
using namespace std;
auto main() ->int{
	string nombre="";
	auto edad=0;
	cout<<"Ingresa tu edad: ";
	cin>>edad;
	cin.ignore();
	cout <<"Ingresa tu nombre completo: ";
	getline(cin,nombre);
	cout <<"Tu nombre es: " << nombre << endl;
	cout <<"Y tu edad es: "<<edad<<endl;
	return 0;
}
