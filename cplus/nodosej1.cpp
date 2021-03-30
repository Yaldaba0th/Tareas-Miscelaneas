/*nodosej1.cpp*/
#include <iostream>
using namespace std;
struct nodeList {
	int val;
	nodeList* next;
};
typedef struct nodeList nodo;
auto leeNumeroNodos()->int{
	auto num=0;
	cout<<"Ingrese numero nodos";
	cin>>num;
	while(num<=0){
		cout<<"Error!"<<endl;		
		cout<<"Ingrese numero nodos";
		cin>>num;
	}
	return num;
}
auto leeDato(int &n)->void{
	cout<<"Ingrese entero positivo";
	cin>>n;
	while(n<=0){
		cout<<"Error!"<<endl;		
		cout<<"Ingrese entero positivo";
		cin>>n;
	}
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
		leeDato(dato);
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
auto main()->int{
	nodo* miLista= nullptr;
	auto numNodos=leeNumeroNodos();
	creaAsignaNodoDer(numNodos,&miLista);
	imprimeLista(miLista);
	return 0;
}
