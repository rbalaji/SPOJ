//
#include<iostream>
#include<stdlib.h>
using namespace std;
int *men;
int *women;
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
	int t;
	int n, i;
	cin>>t;
	while(t != 0){
		cin>>n;
		int s = 0;
		men = (int*)malloc(n*sizeof(int));
		women = (int*)malloc(n*sizeof(int));
		for(i = 0; i < n; i++){
			cin>>men[i];
		}
		for(i = 0; i < n; i++){
			cin>>women[i];
		}
		quicksort(men, 0, n - 1);
		quicksort(women, 0, n - 1);
		for(i = 0; i < n; i++){
			s += men[i] * women[i];
		}
		cout<<s<<endl;
		t--;
	}
}
