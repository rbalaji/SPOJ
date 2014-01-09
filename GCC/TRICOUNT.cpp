//
#include<iostream>
using namespace std;
main(){
	int t;
	int64_t N;
	cin>>t;
	while(t != 0){
		cin>>N;
		N = N * (N + 2) * (2 * N + 1);
		if(N % 2 != 0){
			N--;
		}
		cout<<(N / 8)<<endl;
		t--;
	}
}
