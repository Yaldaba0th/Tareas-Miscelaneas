/*pila1.cpp*/
#include <iostream>
using namespace std;
struct nodePila {
	int val;
	nodePila* down;
};
typedef struct nodePila nodo;
auto contar(nodo** cabeza)->int{
	auto c=0;
	nodo* sigue=*cabeza;
	while(sigue !=nullptr){
		c+=1;
		sigue=sigue->down;
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
auto creaNodo(int dato,nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->val=dato;
	p->down=*cabeza;
	*cabeza=p;
	return;
}
auto PUSH(nodo** cabeza) ->bool{
	auto L=true;
	auto dato=0;
	leeDato(dato);
	if(contar(cabeza)<5){
		creaNodo(dato, cabeza);
	}
	else{
		cout<<"OVERFLOW!!!"<<endl;
		L=false;
	}
	return L;
}
auto imprimePila(nodo* cabeza) ->void{
	cout<<"Tope->";	
	nodo* sigue=cabeza;
	while(sigue !=nullptr){
		cout<<sigue->val<<"->";
		sigue=sigue->down;
	}
	cout<< "nullptr"<<endl;
	return;
}
auto main()->int{
	bool loop= true;
	nodo* miPilaSP= nullptr;
	while(loop){
	loop=PUSH(&miPilaSP);
	imprimePila(miPilaSP);
	}
	return 0;
}
