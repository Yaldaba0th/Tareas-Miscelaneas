/*rf34.cpp*/
#include <iostream>
#include <ctime>
#include <array>
#include <cstdlib>
using namespace std;
struct nodeList{
	int val;
	nodeList* next;
};
typedef struct nodeList nodo;
auto azar() ->int{
	int valor=rand()%41+10;
	return valor;
}
auto creaArreglo(array <int,10> &L) ->void{
	srand(time(0));
	for(auto fil=0;fil<10;fil++){
		L[fil]=azar();
	}
	return;
}
auto imprimeArreglo(array <int,10> L) ->void{
	cout<<"Arreglo original: "<<endl;
	for(auto i=0;i<9;i++){
		cout <<L[i]<<" ";
	}
	cout<<L[9]<<endl;
	return;
}
auto creaNodo(int dato, nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->val=dato;
	p->next=*cabeza;
	*cabeza=p;
	return;
}
auto creaAsignaNodoIzq(array <int,10> L, nodo** cabeza) ->void{
	for(auto i=0;i<10;i++){
		creaNodo(L[i],cabeza);
	}
	return;
}
auto imprimeLista(nodo* cabeza) ->void{
	cout<<"Lista enlazada: "<<endl;
	nodo* sigue = cabeza;
	cout <<"cabeza->";
	while(sigue !=nullptr){
		cout << sigue->val<<"->";
		sigue=sigue->next;
	}
	cout<<"nullprt"<<endl;
	return;
}
auto main() ->int{
	array <int,10> Lista={0};
	creaArreglo(Lista);
	imprimeArreglo(Lista);
	nodo* miLista=nullptr;
	creaAsignaNodoIzq(Lista,&miLista);
	imprimeLista(miLista);
	return 0;
}
