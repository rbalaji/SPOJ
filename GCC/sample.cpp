//
#include<iostream>
using namespace std;
main(){
	int N, i, S, max, a;
	cin>>N;
	cin>>a;
	S = a;
	max = S;
	for(i = 2; i <= N; i++){
		cin>>a;
		if((S + a) > a){
			S = S + a;
		}
		else{
			S = a;
		}
		if(S > max){
			max = S;
		}
	}
	cout<<"MSS = "<<max<<endl;
}
