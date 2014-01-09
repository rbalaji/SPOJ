//
#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	int n, i;
	cin>>n;
	while(n != -1){
		long int s = 0;
		int* candy = (int*)malloc(n*sizeof(int));
		for(i = 0; i < n; i++){
			cin>>candy[i];
			s += candy[i];
		}
		if(s % n !=0){
			cout<<"-1"<<endl;
			cin>>n;
			continue;
		}
		int avg = s / n;
		long int k = 0;
		for(i = 0; i < n; i++){
			if(avg < candy[i]){
				k = k + (candy[i] - avg);
			}
		}
		cout<<k<<endl;
		cin>>n;
	}
}
