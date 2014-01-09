//
#include<iostream>
#include<stdlib.h>
using namespace std;
int *s;

int part(int *arr, int left, int right, int pI){
	int i;
	int pV = arr[pI];
	int temp = arr[pI];
	arr[pI] = arr[right];
	arr[right] = temp;
	int sI = left;
	for(i = left; i < right; i++){
		if(arr[i] >= pV){
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
	long int t;
	long int n;
	int m, i, w = 1;
	cin>>t;
	while(t != 0){
		cin>>n>>m;
		s = (int*)malloc(m * sizeof(int));
		long int r = 0;
		for(i = 0; i < m; i++){
			cin>>s[i];
		}
		quicksort(s, 0, m - 1);
		int flag = 0;
		for(i = 0; i < m; i++){
			r += s[i];
			if(r >= n){
				cout<<"Scenario #"<<w<<":\n"<<(i+1)<<"\n\n";
				flag = 1;
				break;
			}
		}
		if(flag == 0){
			cout<<"Scenario #"<<w<<":\nimpossible\n\n";
		}
		w++;
		t--;
	}
}
