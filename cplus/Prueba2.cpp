/*Prob02_control2B_sol.cpp */
#include <iostream>
#include <array>
const int N = 10;
using namespace std;
struct nodeList{
	int val;
	nodeList* next;
	nodeList* prev;
};
typedef struct nodeList nodo;
auto opciones() -> int{
	cout << "Menú opciones de Eliminación: " << endl;
	cout << "1. Nodo de la cabeza" << endl;
	cout << "2. Identificando el nodo" << endl;
	cout << "3. Nodo de la cola" << endl;
	cout << "4. Salir del programa" << endl;
	cout << "Su opción? ";
	auto ingr = 0;
	cin >> ingr;
	return ingr;
}
auto menuEliminacion() -> int{
	auto ingreso = opciones();
	while(not(ingreso >= 1 and ingreso <=4)){
		cout << "Debe repetir el ingreso!!" << endl;
		ingreso = opciones();
	}
	return ingreso;
}
auto eliminaNodo(int op,nodo** cabeza,nodo** cola)->void{
	nodo* sigue = *cabeza;
	nodo* antes = *cabeza;
	int dato = 0;
	if(*cabeza == nullptr){
		cout << "La lista está vacía!!" << endl;
		exit(0);
	}
	else if(*cabeza==*cola and (op==1 or op==3)){
		nodo* tempo=*cabeza;	
		(*cabeza)=nullptr;
		(*cola)=(*cabeza);
		delete(tempo);
	}
	else if(op == 1){
		*cabeza = sigue->next;
		sigue->next->prev = nullptr;
		sigue->next = nullptr;
		delete(sigue);
	}
	else if(op==2){
		cout<<"Escriba valor que desea eliminar de la lista"<<endl;
		cin>>dato;
		if(*cabeza==*cola and dato==(*cabeza)->val){
				nodo* tempo=*cabeza;
				(*cabeza)=nullptr;
				(*cola)=(*cabeza);
				delete(tempo);
		}
		else if(dato==sigue->val){
			*cabeza=sigue->next;
			sigue->next->prev = nullptr;
			sigue->next = nullptr;
			delete(sigue);
		}
		else{
			while(sigue != nullptr and dato != sigue->val){
				antes=sigue;
				sigue=sigue->next;
			}
			if(sigue==nullptr){
				cout<<"Recorrio la lista de numeros y no se encontro el nodo!!"<<endl;
			}
			else{
				antes->next=sigue->next;
				if(sigue==*cola){
					*cola=antes;
				}
				else{
					antes->next->prev=antes;		
				}
				sigue->next=nullptr;
				sigue->prev=nullptr;
				delete(sigue);
			}
		}
	}
	else if(op==3){
		sigue=*cola;
		*cola=sigue->prev;
		(*cola)->next=nullptr;
		sigue->next=nullptr;
		sigue->prev=nullptr;
		delete(sigue);
	}
	else{
		exit(0);	
	}
	return;
}
auto creaNodo(int dato,nodo** cabeza, nodo** cola)->void{
	nodo* p = new nodo;
	p->val = dato;
	p->next = nullptr;
	p->prev = nullptr;
	*cola = p;
	*cabeza = p;
	return;
}
auto creaNodo(int dato,nodo** cola)->void{
	nodo* p = new nodo;
	p->val = dato;
	p->prev = *cola;
	p->prev->next = p;
	p->next = nullptr;
	*cola = p;
	return;
}
auto creaAsignaNodoDer(array <int,N> L,nodo** cabeza,nodo** cola)->void{	
	auto dato = 0;
	for(int i = 0; i < N; i++){
		if(i == 0){
			creaNodo(L[i],cabeza, cola);
		}
		else{
			creaNodo(L[i],cola);
		}
	}
	return;
}
auto imprimeListaC(nodo* cabeza) -> void{
	nodo* sigue = cabeza;
	cout <<"cabeza->";
	while(sigue != nullptr){
		cout << sigue->val;
		cout << "->";
		sigue = sigue->next;
	}
	cout << "nullptr" << endl; 
	return;
}
auto imprimeListaR(nodo* cola) -> void{
	nodo* sigue = cola;
	cout <<"cola->";
	while(sigue != nullptr){
		cout << sigue->val;
		cout << "->";
		sigue = sigue->prev;
	}
	cout << "nullptr" << endl; 
	return;
}
auto main() -> int {
	array <int,10> Lista = {5,10,15,20,25,30,35,40,45,50};
	nodo* miListaC = nullptr;
	nodo* miListaR = nullptr;
	creaAsignaNodoDer(Lista,&miListaC, &miListaR);
	imprimeListaC(miListaC);
	imprimeListaR(miListaR);
	auto opcion = menuEliminacion();
	while(opcion != 4){
		eliminaNodo(opcion,&miListaC,&miListaR);
		imprimeListaC(miListaC);
		imprimeListaR(miListaR);
		if(miListaC == nullptr){
			cout << "No puede seguir eliminando nodos!!" << endl;
			cout << "La lista está vacía!!" << endl;
			cout << "Finaliza el programa!!" << endl;
			exit(0);
		}
		else{
			opcion = menuEliminacion();
		}
	}
	return 0;
}
