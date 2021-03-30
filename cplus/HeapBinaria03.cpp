/*HeapBinaria03.cpp*/
#include <iostream>
#include <array>
const auto N=9;
using namespace std;
auto imprimeArreglo(array<int,N> arr, int n) ->void{
	for (int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
auto construyeHeap(array<int,N> &arr, int n, int i) ->void{
	auto mayor=i;
	auto l=2*i+1;
	auto r=2*i+2;
	if(l<n and arr[l]>arr[mayor]){
		mayor=l;
	}
	if(r<n and arr[r]>arr[mayor]){
		mayor=r;
	}
	if(mayor !=i){
		swap(arr[i],arr[mayor]);
		construyeHeap(arr,n,mayor);
	}
}
auto creaHeap(array<int,N> &arr, int n) ->void{
	for (int i=n/2-1;i>=0;i--){
		construyeHeap(arr,n,i);
	}
	cout<<endl;
}
auto main() ->int{
	array<int,N> numeros={45,36,54,27,63,72,61,18,99};
	auto n=sizeof(numeros)/sizeof(numeros[0]);
	cout <<"Arreglo inicial de numeros: "<<endl;
	imprimeArreglo(numeros,n);
	creaHeap(numeros,n);
	cout << "Max-Heap binario: "<<endl;
	imprimeArreglo(numeros,n);
	return 0;
}
