/*arbolbinario6.cpp*/
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
	cout<<"Ingrese numero a eliminar: ";
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

auto eliminaNodoBasico(nodo *raiz, int n)->void{
	nodo* q=raiz;	
	nodo* p=raiz;
	while(p!=nullptr and p->val!=n){
		if(n<p->val){
			q=p;
			p=p->left;
		}
		else{
			q=p;
			p=p->right;
		}
	}
	if(p==nullptr){
		cout<<"Se recorrio y no se encontro nodo!"<<endl;
	}
	else if(p==raiz){
		cout<<"No se puede elimar raiz!"<<endl;
	}
	else if(p->left==nullptr and p->right==nullptr){
		if(q->left==p){
			q->left=nullptr;
		}	
		else{
			q->right=nullptr;
		}
		delete(p);
	}
	else{
		cout<<"No es hoja no se puede eliminar!!"<<endl;
	}
	return;
}
auto opciones()->bool{
	auto dato=0;	
	cout<<"Desea eliminar nodos?"<<endl;
	cout<<"1.Si"<<endl;
	cout<<"2.No"<<endl;
	cin>>dato;
	while(dato!= 1 and dato!=2){
		cout<<"Ingreso no valido!!"<<endl;
		cout<<"Desea eliminar otro nodo?"<<endl;
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
		cout<<"Se eliminara el nodo de valor "<<num<<endl<<endl;
		eliminaNodoBasico(raiz,num);
		imprime2D(raiz);
		L=opciones();
	}
	return 0;
}
