//
#include<iostream>
using namespace std;
main(){
	int N = 1, s = 0,i;
	cin>>N;
	while(N!=0){
		s = 0;
		for(i = 0; i<=N; i++){
			s+=i*i;
		}
		cout<<s<<endl;
		cin>>N;
	}
}
