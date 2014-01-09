//
#include<iostream>
#include<cstdlib>
using namespace std;
main(){
	int T, N, i = 0, x, s = 0, V;
	int P[100];
	cin>>T;
	while(i < T){
		cin>>N;
		for(x = 1; x <= N; x++){
			cin>>V;
			s+=V/x;
		}
		if(s%2!=0){
			cout<<"ALICE\n";
		}
		else{
			cout<<"BOB\n";
		}
		s = 0;
		i++;
	}
}
