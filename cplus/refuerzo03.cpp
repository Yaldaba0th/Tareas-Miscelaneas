/*refuerzo03.cpp*/
#include <iostream>
#include <cstdlib>
using namespace std;
auto leeLado() ->int{
	auto l=0;
	cout<<"Ingrese lado: "<<endl;
	cin>>l;
	while (l%2==0 or l<=4){
		cout<<"Error!"<<endl;
		cout<<"Ingrese lado: "<<l<<endl;
		cin>>l;
	}
	return l;
}
auto imprimeRec(int l) ->void{
	for(auto i=0;i<l;i++){
		for(auto j=0;j<2*l;j++){
			if(j==2*l-1){
				cout<<"*"<<endl;			
			}
			else{
				if(i==0 or i==l-1 or j==0){
				cout<<"* ";			
				}
				else{
				cout<<"  ";			
				}			
			}
		}
	}
}	
auto main() ->int{
	auto lado=leeLado();
	imprimeRec(lado);
	return 0;
}
