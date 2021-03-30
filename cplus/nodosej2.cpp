/*nodosej2.cpp*/
#include <iostream>
using namespace std;
struct nodeList {
	int val;
	nodeList* next;
};
typedef struct nodeList nodo;
auto leeValor(int &n)->void{
	cout<<"Ingrese valor entero a insertar ";
	cin>>n;
	return;
}
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
auto creaAsignaNodoDer(int N,nodo** cabeza) ->void{
	auto dato=0;
	for(int i=0; i< N;i++){
		dato+=10;
		creaNodo(dato,cabeza);
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
auto insertaValor(int dato,nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->val=dato;	
	nodo* pointer=*cabeza;
	nodo* ant = *cabeza;
	while(pointer->val <= dato and pointer->next!=nullptr){
		ant=pointer;		
		pointer=pointer->next;
	}
	if(pointer->next==nullptr){
		pointer->next=p;
		p->next=nullptr;	
	}
	else{
		ant->next=p;
		p->next=pointer;
	}	
	
	return;
}
auto main()->int{
	nodo* miLista= nullptr;
	auto nuevo=0;
	creaAsignaNodoDer(5,&miLista);
	imprimeLista(miLista);
	leeValor(nuevo);
	insertaValor(nuevo,&miLista);
	imprimeLista(miLista);	
	return 0;
}
