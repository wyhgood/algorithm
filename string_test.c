#include <string>
#include <iostream>
using namespace std;

int main(){
	string str = "aaddsdsfxs";
	int size;
	size = str.capacity();
	cout<< size <<endl;

	for (char c:str){
		cout<< c<< endl;
	}
}
