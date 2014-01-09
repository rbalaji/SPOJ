//
#include<iostream>
using namespace std;
main(){
	long int a, b, c;
	cin>>a>>b>>c;
	while(a != 0 || b != 0 || c != 0){
		if((b - a) == (c - b)){
			cout<<"AP "<<(c + (c - b))<<endl;
		}
		else{
			cout<<"GP "<<(c * (c / b))<<endl;
		}
		cin>>a>>b>>c;
	}
}
