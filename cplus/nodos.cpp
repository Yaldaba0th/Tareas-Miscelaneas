/*nodos.cpp*/
#include <iostream>
using namespace std;
struct nodeList {
	int val;
	nodeList* next;
};
typedef struct nodeList nodo;
nodo* miLista=nullptr;
auto creaAsignaNodoIzq(nodo** cabeza) ->void{
	auto dato=0;
	for(int i=0; i<4;i++){
		dato+=10;
		nodo* p= new nodo;
		p->val=dato;
		p->next=*cabeza;
		*cabeza=p;
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
	creaAsignaNodoIzq(&miLista);
	imprimeLista(miLista);
	return 0;
}
