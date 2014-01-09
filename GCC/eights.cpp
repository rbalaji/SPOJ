//
#include<iostream>
using namespace std;
main(){
	long long int t, n;
	cin>>t;
	int num[] = {942, 192, 442, 692};
	while(t != 0){
		cin>>n;
		cout<<(((n - 1) / 4) * 1000 + num[n % 4])<<endl;
		t--;
	}
}
