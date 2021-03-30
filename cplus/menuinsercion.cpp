/*menuinsercion.cpp*/
#include <iostream>
#include <array>
#include <string>
using namespace std;
struct nodeList {
	string nombre = "";
	nodeList* next;
};
typedef struct nodeList nodo;
auto opciones()->int{
	cout<<"Menu Opciones Eliminacion"<<endl;
	cout<<"1. Al Inicio"<<endl;
	cout<<"2. Identificando nodo"<<endl;
	cout<<"3. El ultimo"<<endl;
	cout<<"4. Salir del programa"<<endl;
	cout<<"Su opcion? "<<endl;
	auto ingr =0;
	cin>>ingr;	
	return ingr;
}
auto menuEliminacion()->int{
	auto ingreso=opciones();
	while(not(ingreso >=1 and ingreso <=4)){
		cout<<"Debe repetir ingreso!!"<<endl;
		ingreso=opciones();		
	}
	return ingreso;
}
auto creaNodo(string nom,nodo** cabeza) ->void{
	nodo* p=new nodo;
	p->nombre=nom;
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
auto soloBlancos(string frase) ->bool{
	auto L=true;
	for(auto i=0;i<(frase.length());i++){
		if(frase.substr(i,1)!=" "){
			L=false;
		}
	}
	return L;
}
auto creaAsignaNodoDer(array <string,3> L,nodo** cabeza) ->void{
	string nom="";
	for(int i=0; i<3;i++){
		creaNodo(L[i],cabeza);
	}
	return;
}

auto imprimeLista(string mensaje,nodo* cabeza) ->void{
	cout<<mensaje<<endl;	
	nodo* sigue=cabeza;
	while(sigue !=nullptr){
		cout<<sigue->nombre<<"->";
		sigue=sigue->next;
	}
	cout<< "nullptr"<<endl;
	return;
}
auto eliminaNodo(int op,nodo** cabeza)->void{
	nodo* sigue=*cabeza;
	nodo* antes=*cabeza;
	string nom="";
	cin.ignore();
	if(*cabeza==nullptr){
		cout<<"La lista esta vacia!!"<<endl;
		exit(0);
	}	
	else if(op==1){
		*cabeza=sigue->next;
		sigue->next=nullptr;
	}
	else if(op==2){
		cout<<"Escriba nombre a eliminar de la lista"<<endl;
		getline(cin,nom);
		while(nom.length()==0 or soloBlancos(nom)){
			cout<<"Ingreso no valido"<<endl;
			cout<<"Escriba nombre a eliminar de la lista"<<endl;
			getline(cin,nom);
		}
		if(nom==sigue->nombre){
			*cabeza=sigue->next;	
		}
		else{
			while(sigue != nullptr and nom != sigue->nombre){
				antes=sigue;
				sigue=sigue->next;
			}
			if(sigue==nullptr){
				cout<<"Recorrido y no encontrado"<<endl;
			}
			else{
				antes->next=sigue->next;
				sigue->next=nullptr;			
			}
		}
	}
	else if(op==3){
		if(sigue->next==nullptr){
			*cabeza=sigue->next;	
		}	
		else{
			while(sigue->next!=nullptr){
				antes=sigue;
				sigue=sigue->next;	
			}
		antes->next=nullptr;
		sigue->next=nullptr;
		}	
	}
	else{
		exit(0);	
	}
	return;
	}
auto main()->int{
	array <string,3> Lista ={"pepe","juan","maria"};
	nodo* miLista= nullptr;
	creaAsignaNodoDer(Lista,&miLista);
	imprimeLista("Lista original",miLista);
	auto opcion=menuEliminacion();
	while(opcion !=4){
		eliminaNodo(opcion,&miLista);
		imprimeLista("Nueva Lista",miLista);
		if(miLista == nullptr){
			cout<<"No puede seguir eliminando nodos!!"<<endl;
			cout<<"La lista esta vacia"<<endl;
			cout<<"Finaliza el programa!!"<<endl;
			exit(0);
		}
		else{
			opcion=menuEliminacion();
		}
	}
	return 0;
}
