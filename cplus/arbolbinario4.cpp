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
auto main()->int{
	array<int,15> Arbol={50,40,30,80,75,60,90,20,35,25,70,15,45,85,5};
	nodo *raiz = nullptr;
	raiz=creaNodo(Arbol[0]);
	creaArbol(raiz,Arbol);
	imprime2D(raiz);
	return 0;
}
