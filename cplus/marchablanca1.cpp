/*marchablanca1.cpp*/
#include <iostream>
using namespace std;
struct nodeList {
	int val;
	nodeList* next;
	nodeList* prev;
};
typedef struct nodeList nodo;
nodo* miLista=nullptr;
auto leeNumeroNodos()->int{
	auto num=0;	
	cout<<"Ingrese numero nodos: ";
	cin>>num;
	while(num<=0){
		cout<<"ERROR!!!"<<endl;
		cout<<"Ingrese numero nodos: ";
		cin>>num;
	}
	return num;
}
auto leeDato(int &n)->void{
	cout<<"Ingrese valor entero positivo: ";
	cin>>n;
	while(n<=0){
		cout<<"ERROR!!!"<<endl;
		cout<<"Ingrese valor entero positivo: ";
		cin>>n;
	}
	return;
}
auto creaNodo(int dato,nodo** cabeza,nodo** cola) ->void{
	nodo* p=new nodo;
	p->val=dato;
	p->next=*cola;
	p->prev=*cabeza;
	*cola=p;
	*cabeza=p;
	return;
}
auto creaNodo(int dato,nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->val=dato;
	p->next=*cabeza;
	p->next->prev=p;
	p->prev=nullptr;
	*cabeza=p;
	return;
}
auto creaAsignaNodoIzq(int N,nodo** cabeza,nodo** cola) ->void{
	auto dato=0;
	for(int i=0; i<N;i++){
		leeDato(dato);
		if(i==0){
			creaNodo(dato, cabeza, cola);		
		}
		else{
			creaNodo(dato, cabeza);		
		}
	}
	return;
}


auto imprimeListaC(nodo* cabeza) ->void{
	cout<<"cabeza->";	
	nodo* sigue=cabeza;
	while(sigue !=nullptr){
		cout<<sigue->val<<"->";
		sigue=sigue->next;
	}
	cout<< "nullptr"<<endl;
	return;
}
auto imprimeListaR(nodo* cola) ->void{
	cout<<"cola->";
	nodo* sigue=cola;
	while(sigue !=nullptr){
		cout<<sigue->val<<"->";
		sigue=sigue->prev;
	}
	cout<< "nullptr"<<endl;
	return;
}
auto main()->int{
	nodo* miListaC= nullptr;
	nodo* miListaR= nullptr;
	auto numNodos=leeNumeroNodos();
	creaAsignaNodoIzq(numNodos,&miListaC,&miListaR);
	imprimeListaC(miListaC);
	imprimeListaR(miListaR);
	return 0;
}
