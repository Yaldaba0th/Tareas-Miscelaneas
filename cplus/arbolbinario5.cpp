/*arbolbinario3.cpp*/
#include <iostream>
#include <string>
#include <array>
auto cuenta=15;
using namespace std;
struct nodeTree {
	int val;
	nodeTree* right;
	nodeTree* left;
};
typedef struct nodeTree nodo;
auto leeValor()->int{
	auto dato=0;	
	cout<<"Ingrese numero a insertar: ";
	cin>>dato;
	while(dato<=0){
		cout<<"Ingreso no valido!!"<<endl;
		cout<<"Ingrese numero a buscar: ";
		cin>>dato;
	}
	return dato;
}
auto creaNodo(int dato) ->nodo*{
	nodo* p=new nodo;
	p->val=dato;
	p->right=nullptr;
	p->left=nullptr;
	return p;
}
auto creaArbol(nodo* ra,array<int,15> Ar)->void{
	auto dato=0;
	for(int i=1;i<15;i++){
		dato=Ar[i];
		nodo* p = ra;
		nodo* q = ra;
		while(dato!=p->val and q!=nullptr){
			p=q;
			if(dato<p->val){
				q=p->left;			
			}
			else{
				q=p->right;	
			}
		}
		if(dato==p->val){
			//dato duplicado
		}
		else if(dato<p->val){
			p->left=creaNodo(dato);
		}
		else{
			p->right=creaNodo(dato);
		}
	}
	return;
}
auto imprime2DUtil(nodo* raiz, int espacio) ->void{
	if(raiz==nullptr){
		return;
	}	
	else{
		espacio+=cuenta;
		imprime2DUtil(raiz->right,espacio);
		cout<<endl;
		for(int i=cuenta; i<espacio;i++){
			cout<<" ";
		}
	cout<<raiz->val;
	imprime2DUtil(raiz->left,espacio);
	}
	return;
}
auto imprime2D(nodo* raiz) ->void{
	imprime2DUtil(raiz, 0);
	cout<<endl;
	return;
}

auto insertaNodo(nodo* p,int n)->void{
	if(n<p->val){
		if(p->left==nullptr){
			nodo* q=creaNodo(n);
			p->left=q;
			return;
		}
		else{
			insertaNodo(p->left,n);
		}
	}
	else if(n!=p->val){
		if(p->right==nullptr){
			nodo* q=creaNodo(n);
			p->right=q;
			return;
		}
		else{
			insertaNodo(p->right,n);
		}
	}
	else{
		cout<<"Nodo ya esta! No se pudo insertar."<<endl;
		return;
	}
	return;	
}
auto opciones()->bool{
	auto dato=0;	
	cout<<"Desea insertar otro nodo?"<<endl;
	cout<<"1.Si"<<endl;
	cout<<"2.No"<<endl;
	cin>>dato;
	while(dato!= 1 and dato!=2){
		cout<<"Ingreso no valido!!"<<endl;
		cout<<"Desea insertar otro nodo?"<<endl;
		cout<<"1.Si"<<endl;
		cout<<"2.No"<<endl;
		cin>>dato;
	}	
	if (dato==1){
		return true;
	}
	else if(dato==2){
		return false;
	}
}
auto main()->int{
	array<int,15> Arbol={50,40,30,80,75,60,90,20,35,25,70,15,45,85,5};
	nodo *raiz = nullptr;
	raiz=creaNodo(Arbol[0]);
	creaArbol(raiz,Arbol);
	imprime2D(raiz);
	bool L=opciones();
	while (L){
		int num=leeValor();
		cout<<"Se insertara el nodo "<<num<<endl;
		insertaNodo(raiz,num);
		imprime2D(raiz);
		L=opciones();
	}
	return 0;
}
