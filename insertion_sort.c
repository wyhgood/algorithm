#include <iostream>
#include <vector>
using namespace std;

int main()
{ 
  vector<int> v;

  int numbers;
  for(int i=0; i<=5; i++){
    cin >> numbers;
    v.push_back(numbers);
  }
  //cin >> numbers;
  
  cout<< "hello world\t" << v.size() <<endl;
}
