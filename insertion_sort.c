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
  
  cout<< "v.size-----\t" << v.size() <<endl;
  
  int temp;
  int exchange;
  for(int i=1; i<=5; i++){
    temp = i;
    while(temp-1>=0 && v[temp] < v[temp-1]){
      exchange = v[temp-1];
      v[temp-1] = v[temp];
      v[temp] = exchange;
      temp--;
    } 
  }
  for(int i=0; i<=5; i++){
    cout<< v[i] << endl;
  }
  return 0;
}
