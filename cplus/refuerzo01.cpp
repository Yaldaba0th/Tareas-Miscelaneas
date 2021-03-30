/*refuerzo01.cpp*/
#include <iostream>
#include <string>
using namespace std;
auto formateo() ->void{
	cout.width(15);
	cout<<left<<"Valor1";
	cout.width(15);
	cout<<left<<"Valor2";
	cout.width(15);
	cout<<left<<"Valor3";
	cout.width(15);
	cout<<right<<"Valor4"<<endl;
	auto A=10;
	auto B=3.1415;
	auto C="xxxxxxxxxxxxxxx";
	auto D=7.148;
	cout.width(15);cout << left <<A;
	cout.width(15);cout << left <<B;
	cout.width(15);cout << right <<C;
	cout.width(15); cout.setf(ios::fixed);
	cout.precision(1);cout<<right<<D<<endl;
	return;
}
auto main() ->int{
	formateo();
	return 0;
}
