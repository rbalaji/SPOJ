//
#include<iostream>
#include<stdlib.h>
using namespace std;
int *men;
int part(int *arr, int left, int right, int pI){
	int i;
	int pV = arr[pI];
	int temp = arr[pI];
	arr[pI] = arr[right];
	arr[right] = temp;
	int sI = left;
	for(i = left; i < right; i++){
		if(arr[i] <= pV){
			temp = arr[i];
			arr[i] = arr[sI];
			arr[sI] = temp;
			sI = sI + 1;
		}
	}
    temp = arr[sI];
	arr[sI] = arr[right];
	arr[right] = temp;
    return sI;
}

void quicksort(int* arr, int left, int right){
	int i;
	if(left < right){
		int pI = (left + right) / 2;
		int pNI = part(arr, left, right, pI);
		quicksort(arr, left, pNI - 1);
		quicksort(arr, pNI + 1, right);
	}
}

main(){
	int i;
	men = (int*)malloc(8*sizeof(int));
	for(i = 0; i < 8; i++){
		cin>>men[i];
	}
	quicksort(men, 0, 7);
	for(i = 0; i < 8; i++){
		cout<<men[i]<<" ";
	}
	cout<<endl;
}
