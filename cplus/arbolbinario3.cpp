/*arbolbinario3.cpp*/
#include <iostream>
#include <string>
#include <array>
auto cuenta=10;
using namespace std;
struct nodeTree {
	int val;
	nodeTree* right;
	nodeTree* left;
};
typedef struct nodeTree nodo;
auto leeValor()->int{
	auto dato=0;	
	cout<<"Ingrese numero a buscar: ";
	cin>>dato;
	while(dato<=0){
		cout<<"Ingreso no valido!!"<<endl;
		cout<<"Ingrese numero a buscar: ";
		cin>>dato;
	}
	return dato;
}
auto leeDato(array<int,14> v,int pos)->int{	
	auto dato=v[pos];
	return dato;
}
auto creaNodo(int dato) ->nodo*{
	nodo* p=new nodo;
	p->val=dato;
	p->right=nullptr;
	p->left=nullptr;
	return p;
}
auto creaArbol(nodo* ra,int N,array<int,14> v)->void{
	auto dato=0;
	for(int i=1;i<N+1;i++){
		dato=leeDato(v,i);
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
auto buscar(nodo *raiz, int n)->nodo*{
	nodo* p=raiz;
	while(p!=nullptr and p->val!=n){
		if(n<p->val){
			p=p->left;
		}
		else{
			p=p->right;
		}
	}	
	if(p==nullptr) cout<<"Numero no encontrado";
	return p;
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
	array<int,14> A={60,30,85,20,50,90,75,40,80,70,95,45,83,73};
	auto num=leeValor();
	auto dato=leeDato(A,0);
	nodo *raiz = nullptr;
	raiz=creaNodo(dato);
	creaArbol(raiz,13,A);
	nodo* q=buscar(raiz,num);
	imprime2D(q);
	return 0;
}
