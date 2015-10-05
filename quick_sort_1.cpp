#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right){
	int i = left, j = right;
	int tmp;
	int pivot = arr[(left + right)/2];
	/*partition*/
	while(i <= j) {
		while (arr[i] < pivot)
			i++;
		while (arr[j] > pivot)
			j--;
		if(i <= j){
			tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	if(left < j)
		quickSort(arr, left, j);
	if(i < right)
		quickSort(arr, i, right);	
}

int main(){
	int arr[] = {2,32,42,13,9};
	quickSort(arr, 0, 4);
	for(int n=0; n<5; n++){
		cout<< arr[n]<<endl;;
	}
}
