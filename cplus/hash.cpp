/*hash.cpp*/
#include <iostream>
#include <array>
using namespace std;
struct nodeList {
	int val;
	nodeList* next;
};
typedef struct nodeList nodo;
auto creaNodo(int dato,nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->val=dato;
	if(*cabeza==nullptr){
		p->next=*cabeza;
		*cabeza=p;
	}
	else{
		nodo* cola= *cabeza;
		while(cola->next !=nullptr){
			cola=cola->next;
		}
		cola->next=p;
		cola=p;
	}
	return;
}
auto imprimeLista(nodo* cabeza) ->void{
	nodo* sigue=cabeza;
	while(sigue !=nullptr){
		cout<<sigue->val<<"->";
		sigue=sigue->next;
	}
	cout<< "nullptr"<<endl;
	return;
}
auto main()->int{
	array<nodo*,10> hash;
	for(int i=0; i<10;i++){
		hash[i]=nullptr;
	}
	array<int,6> numeros={5,10,3,15,20,19};
	for(int i=0; i<6;i++){
		int mod=numeros[i]%10;
		creaNodo(numeros[i],&hash[mod]);
	}
	for(int i=0; i<10;i++){
		cout<<"Hash"<<i<<": ";
		imprimeLista(hash[i]);
	}
	return 0;
}
