/*arbolbinario1.cpp*/
#include <iostream>
#include <string>
auto cuenta=10;
using namespace std;
struct nodeTree {
	int val;
	nodeTree* right;
	nodeTree* left;
};
typedef struct nodeTree nodo;
auto leeDato(string mensaje)->int{
	auto dato=0;	
	cout<<mensaje;
	cin>>dato;
	while(dato<=0){
		cout<<"Ingreso no valido!!"<<endl;
		cout<<mensaje;
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
auto creaArbol(nodo* ra,int N)->void{
	auto dato=0;
	for(int i=0;i<N;i++){
		dato=leeDato("Inserte nodo hijo: ");
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
	auto dato=leeDato("Inserte nodo raiz: ");
	nodo *raiz = nullptr;
	raiz=creaNodo(dato);
	creaArbol(raiz,14);
	imprime2D(raiz);
	return 0;
}
