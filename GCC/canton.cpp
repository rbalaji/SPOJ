//
#include<iostream>
#include<cmath>
using namespace std;
main(){
	int t;
	long long int k, n, m;
	cin>>t;
	while(t != 0){
		cin>>k;
		k;
		n = (-1.0f + sqrt(1 + 8 * (k - 1))) / 2 + 1;
		m = k - (n - 1) * n / 2;
		if(n % 2 == 0){
			cout<<"TERM "<<k<<" IS "<<m<<"/"<<(n - (m - 1))<<endl;
		}
		else{
			cout<<"TERM "<<k<<" IS "<<(n - (m - 1))<<"/"<<m<<endl;
		}
		t--;
	}
}
