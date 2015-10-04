// get the key 
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

  map<string, string> string_map;
  string  a="abd";
  string  b="ccc";
  string_map[a] = b;
  cout<< string_map[a] <<endl;
  cout<< "test" <<endl;
  int c[] = {0, 1, 2, 4,3};
  vector<int> v(c, c+sizeof(c)/sizeof(c[0]));
  cout<< v.size() <<endl;
  sort(v.begin(),v.end());  
  for(int i=0; i<5; i++){
	cout<< v[i] <<endl;
  }
  return 0;	
}
