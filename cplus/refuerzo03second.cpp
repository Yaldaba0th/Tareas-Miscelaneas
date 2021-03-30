/*refuerzo03second.cpp*/
#include <iostream>
#include <cstdlib>
using namespace std;
auto leeLado() ->int{
	auto l=0;
	cout<<"Ingrese lado: ";
	cin>>l;
	while (l%2==0 or l<=4){
		cout<<"Error!"<<endl;
		cout<<"Ingrese lado: ";
		cin>>l;
	}
	return l;
}
auto imprimeRec(int l) ->void{
	for(auto i=0;i<l;i++){
		for(auto j=0;j<2*l-1;j++){
			if(i==0 or i==l-1 or j==0){
				cout<<"* ";			
			}
			else{
				cout<<"  ";	
			}
		}		
		cout<<"*"<<endl;
	}
}	
auto main() ->int{
	auto lado=leeLado();
	imprimeRec(lado);
	return 0;
}
