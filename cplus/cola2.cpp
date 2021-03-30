/*cola2.cpp*/
#include <iostream>
using namespace std;
struct nodeCola {
	int val;
	nodeCola* next;
};
typedef struct nodeCola nodo;
auto contar(nodo** cabeza)->int{
	auto c=0;
	nodo* sigue=*cabeza;
	while(sigue !=nullptr){
		c+=1;
		sigue=sigue->next;
	}
	return c;
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
	p->next=nullptr;
	*cola=p;
	*cabeza=p;
	return;
}
auto creaNodo(int dato,nodo** cola) ->void{
	nodo* p=new nodo;
	p->val=dato;
	p->next=nullptr;
	(*cola)->next=p;
	*cola=p;
	return;
}
auto Enqueue(nodo** cabeza,nodo** cola) ->bool{
	auto L=true;
	auto dato=0;
	leeDato(dato);
	if(contar(cabeza)==0){
			creaNodo(dato, cabeza, cola);		
		}
	else if(contar(cabeza)<5){
			creaNodo(dato, cola);		
		}
	else{
		cout<<"OVERFLOW!!!"<<endl;
		L=false;
	}
	return L;
}
auto Dequeue(nodo** cabeza) ->bool{
	auto L=true;
	auto dato=0;
	if(contar(cabeza)>0){
		nodo* t=*cabeza;
		*cabeza=(*cabeza)->next;
		delete(t);
	}
	else{
		cout<<"UNDERFLOW!!!"<<endl;
		L=false;
	}
	return L;
}
auto imprimeCola(nodo* cabeza) ->void{
	cout<<"front->";	
	nodo* sigue=cabeza;
	while(sigue !=nullptr){
		cout<<sigue->val<<"->";
		sigue=sigue->next;
	}
	cout<< "rear"<<endl;
	return;
}
auto main()->int{
	bool loop= true;
	nodo* miColaR= nullptr;
	nodo* miColaF= nullptr;
	while(loop){
	loop=Enqueue(&miColaF,&miColaR);
	imprimeCola(miColaF);
	}
	loop=true;
	while(loop){
	loop=Dequeue(&miColaF);
	imprimeCola(miColaF);
	}
	return 0;
}
