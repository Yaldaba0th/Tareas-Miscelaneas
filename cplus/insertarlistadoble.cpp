/*insertarlistadoble.cpp*/
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
auto leePosicion(int &n,int num)->void{
	cout<<"Ingrese valor en rango: ";
	cin>>n;
	while(n<=0 or n>num+1){
		cout<<"ERROR!!!"<<endl;
		cout<<"Ingrese valor en rango: ";
		cin>>n;
	}
	return;
}
auto insertaNodo(nodo** cabeza,int num,nodo** cola) ->void{
	auto nuevo=0;
	auto pos=0;
	leeDato(nuevo);
	leePosicion(pos,num);
	auto c=1;
	nodo* p=new nodo;
	nodo* q=*cabeza;
	if (pos==1){
		creaNodo(nuevo,cabeza);
	}
	else if (pos==num+1){
		nodo* p=new nodo;
		p->val=nuevo;
		p->prev=*cola;
		p->prev->next=p;
		p->next=nullptr;
		*cola=p;		
	}
	else{
		nodo* p=new nodo;
		p->val=nuevo;
		nodo* q=*cabeza;
		while (c!=pos){
			q=q->next;
			c+=1;
		}
		q->prev->next=p;
		p->prev=q->prev;
		p->next=q;	
		q->prev=p;		
	}
	return;
}
auto main()->int{
	nodo* miListaC= nullptr;
	nodo* miListaR= nullptr;
	auto numNodos=leeNumeroNodos();
	creaAsignaNodoIzq(numNodos,&miListaC,&miListaR);
	imprimeListaC(miListaC);
	imprimeListaR(miListaR);
	cout<<"Insercion de nodo al Inicio"<<endl;
	insertaNodo(&miListaC,numNodos,&miListaR);
	imprimeListaC(miListaC);
	return 0;
}
