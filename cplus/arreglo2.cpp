/*arreglo2.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto main() ->int{
	array<int,3> Arreglo={5,10,15};
	cout <<"tamaño del arreglo = "<<Arreglo.size() <<endl;
	for(int i=0;i<3;i++){
		cout<<Arreglo[i]<<endl;	
	}
	return 0;
}
