/*funcion01.cpp*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	for(auto i = 0; i<10; i++){
		cout << rand() << endl;	
	}
	return 0;
}
