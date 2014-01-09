//
#include<iostream>
using namespace std;
main(){
	int t, a, s, c, i;
	long int b;
	cin>>t;
	while(t != 0){
		cin>>a>>b;
		a = a % 10;
		if(a == 0){
			cout<<"0"<<endl;
			t--;
			continue;
		}
		if(b == 0){
			cout<<"1"<<endl;
			t--;
			continue;
		}
		int last[4];
		s = 1;
		c = 0;
		for(i = 0; i < 4; i++){
			s = (s * a) % 10;
			last[i] = s;
		}
		cout<<last[((b % 4) + 3) % 4]<<endl;
		t--;
	}
}
