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
auto tablaHash(array<nodo*,10> &h,array<int,6> n) ->void{
	for(int i=0; i<6;i++){
		int mod=n[i]%10;
		creaNodo(n[i],&h[mod]);
	}
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
auto imprimeHash(array<nodo*,10> h) ->void{
	for(int i=0; i<10;i++){
		cout<<"Hash "<<i<<": ";
		imprimeLista(h[i]);
	}
}
auto inicializaHash(array<nodo*,10> &h) ->void{
	for(int i=0; i<10;i++){
		h[i]=nullptr;
	}
}
auto main()->int{
	array<nodo*,10> hash;
	inicializaHash(hash);
	array<int,6> numeros={5,10,3,15,20,19};
	tablaHash(hash,numeros);
	imprimeHash(hash);
	return 0;
}
