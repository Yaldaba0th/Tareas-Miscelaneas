/*Prob01_control2B.cpp */
#include <iostream>
using namespace std;
struct Nodo{
	int val;
	Nodo* sigue;
};
typedef struct Nodo nodo;

auto leeDato(int &dato) -> void{
	cout << "Ingrese valor entero positivo: ";
	cin >> dato;
	while(dato <= 0){
		cout << "Ingreso no válido!!" << endl;
		cout << "Ingrese valor entero positivo: ";
		cin >> dato;
	}
	return;
}
auto contar(nodo** cabeza)->int{
	auto c=0;
	nodo* contador=*cabeza;
	while(contador !=nullptr){
		c+=1;
		contador=contador->sigue;
	}
	return c;
}
auto creaNodo(int dato,nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->val=dato;
	p->sigue=*cabeza;
	*cabeza=p;
	return;
}
auto PUSH(int dato,nodo** SP) ->bool{
	auto L=true;
	if(contar(SP)<5){
		creaNodo(dato, SP);
	}
	else{
		cout<<"No se permiten mas nodos!! Pila Llena"<<endl;
		L=false;
	}
	return L;
}
auto POP(nodo** SP) ->bool{
	auto L=true;
	if(contar(SP)>0){
		nodo* t=*SP;
		*SP=(*SP)->sigue;
		delete(t);
	}
	else{
		cout<<"No se pueden eliminar mas nodos!! Pila Vacia"<<endl;
		L=false;
	}
	return L;
}
auto recorreRecursiva(nodo* Q) -> void{
	if(Q==nullptr) return;
	cout << Q->val <<" -> ";
	recorreRecursiva(Q->sigue);
	return;
}
auto imprimePilaRecursiva(nodo* SP) -> void{
	cout<<"SP -> ";	
	recorreRecursiva(SP);
	cout << "nullptr" << endl; 
	return;
}
auto defineOperacion() -> int{
	auto op = 0;
	auto repite = true;
	while(repite){
		cout << "Menú de opciones" << endl;
		cout << "0: Terminar" << endl;
		cout << "1: PUSH" << endl;
		cout << "2: POP" << endl;
		cout << "Ingrese su opción: ";
		cin >> op;
		if(op >= 0 and op <= 2){
			repite = false;		
		}
		else{
			cout << "Opción no válida!!" << endl;
		}
	}
	return op;
}
auto main() -> int {
	bool loop = true;
	nodo* miPilaSP = nullptr;
	auto dato = 0;
	auto opcion = defineOperacion();
	while(loop){
		if(opcion == 0){
			loop = false;
		}
		else{
			if(opcion == 1){
				leeDato(dato);
				loop = PUSH(dato,&miPilaSP);
			}
			else{
				loop = POP(&miPilaSP);
			}	
			loop = true;
			imprimePilaRecursiva(miPilaSP);
			opcion = defineOperacion();
		}
	}
	return 0;
}

