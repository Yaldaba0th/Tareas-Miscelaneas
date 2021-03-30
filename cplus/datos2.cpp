/*Automatica.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto answer=7;
	auto temp=0.0;
	auto result=0.0;
	while(answer<1 or answer>2){
	cout<<"¿Que desea convertir?\n ";
	cout<<"1.Centigrados a Fahrenheit\n ";
	cout<<"2.Farenheit a Centigrados\n ";	
	cout<<"Ingrese su opcion (1 o 2) y presione Intro ";		
	cin >> answer;
}
	cout<<"Ingrese temperatura a convertir ";
	cin >> temp;
	if(answer==1){
	result=32 + temp*(9.0/5);
	cout<< temp <<" C equivale a " << result <<" F " << endl ;
	}
	if(answer==2){
	result=(temp-32)*(5.0/9);
	cout<< temp <<" F equivale a " << result <<" C " << endl ;
	}
	return 0;
}
