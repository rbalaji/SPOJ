//
#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	int n, i;
	cin>>n;
	while(n != 0){
		int flag = 0;
		int *arr = (int*)malloc(n*sizeof(int));
		int *arr2 = (int*)malloc(n*sizeof(int));
		for(i = 0; i < n; i++){
			cin>>arr[i];
			arr2[arr[i] - 1] = (i+1);
		}
		for(i = 0; i < n; i++){
			if(arr[i] != arr2[i]){
				flag = 1;
			}
		}
		if(flag == 0){
			cout<<"ambiguous"<<endl;
		}
		else{
			cout<<"not ambiguous"<<endl;
			flag = 1;
		}
		cin>>n;
	}
}
