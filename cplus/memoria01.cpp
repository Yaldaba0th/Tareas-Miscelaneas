/*memoria01.cpp*/
#include <iostream>
using namespace std;
int total;
auto cuadrado(int x) ->int{
	return x*x;
}
auto cuadradoDeSuma(int x,int y) ->int{
	auto z=cuadrado(x+y);
	return z;
}
auto main() ->int{
	auto a=4, b=8;
	total=cuadradoDeSuma(a,b);
	cout <<"Salida = "<<total <<endl;
	return 0;
}
