//
#include<iostream>
using namespace std;
main(){
	long long int t, n, c;
	cin>>t;
	while(t != 0){
		cin>>n;
		long long int s = 0, m = n;
		while(m != 0){
			cin>>c;
			s = (s + c) % n;
			m--;
		}
		if(s == 0){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
		t--;
	}
}
