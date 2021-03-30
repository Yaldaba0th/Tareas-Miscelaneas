/*HeapBinaria01.cpp*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
auto main() ->int{
	vector<int> numeros={45,36,54,27,63,72,61,18,99};
	make_heap(begin(numeros),end(numeros));
	for(int i:numeros){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
