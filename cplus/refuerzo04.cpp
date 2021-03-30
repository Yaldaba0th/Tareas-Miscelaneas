/*refuerzo04.cpp*/
#include <iostream>
#include <array>
using namespace std;
auto esPrimo(int iter) ->bool{
	auto V= true;
	for(auto i=2;i<iter;i++){
		if(iter%i==0){
			V=false;	
		}	
	}
	return V;
}
auto crea100Primos(array<int,100> &v) ->void{
	auto c=0;
	auto number=2;
	while(c<100){		
		if(esPrimo(number)){
			v[c]=number;
			c=c+1;
		}
	number+=1;
	}
	
	return;
}
auto imprime100Primos(array<int,100> v) ->void{
	for(auto j=0; j<100;j++){
		if(v[j]<10){
			cout<<"00";
		}
		else if(v[j]<100){
			cout<<"0";
		}
		else{
		}
		cout<<v[j]<<" ";
		if((j+1)%5==0){
			cout<<endl;	
		}
	}
	cout<<endl;
	return;
}
auto main() ->int{
	array<int,100> arreglo ={0};
	crea100Primos(arreglo);
	imprime100Primos(arreglo);
	return 0;
}
