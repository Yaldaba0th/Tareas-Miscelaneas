/*datos3.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto lim=10;
	auto suma=0;
	auto prom=0.0;
	for(auto num=1; num<lim; num++){
		cout<< num*num << " ";
		suma+= num*num;
	}
	cout<< lim*lim << endl;
	suma+= lim*lim;
	prom= suma*(1.0/lim);
	cout<< "La suma es: " << suma << endl;
	cout<< "El promedio es: " << prom << endl;
	return 0;
}
