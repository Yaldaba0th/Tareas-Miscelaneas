/*refuerzo05.cpp*/
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
using namespace std;
auto crea8Elementos(array<array<int,6>,3> &v) ->void{
	srand(time(0));
	for(auto fil=0;fil<3;fil++){
		for(auto col=0;col<6;col++){
			v[fil][col]=50+rand()%41;
		}
	}
	return;
}
auto imprimeNormal(array<array<int,6>,3> v) ->void{
	for(auto fil=0;fil<3;fil++){
		for(auto col=0;col<5;col++){
			cout<<v[fil][col]<<" ";
		}
			cout<<v[fil][5]<<endl;
	}
	cout<<endl;
	return;
}
auto imprimeTraspuesta(array<array<int,6>,3> v) ->void{
	for(auto col=0;col<6;col++){
		for(auto fil=0;fil<2;fil++){
			cout<<v[fil][col]<<" ";
		}
			cout<<v[2][col]<<endl;
	}
	return;
}
auto main() ->int{
	array<array<int,6>,3> arreglo ={0};
	crea8Elementos(arreglo);
	imprimeNormal(arreglo);
	imprimeTraspuesta(arreglo);
	return 0;
}
