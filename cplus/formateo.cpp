/*formateo.cpp*/
#include <iostream>
using namespace std;
int main(){
	auto divide=10.0/3;
	auto gra=0.0;
	cout<< divide << endl;	
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<< divide << endl;	
	return 0;
}
