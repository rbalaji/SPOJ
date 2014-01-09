//
#include<iostream>
using namespace std;
main(){
	int t;
	int ng, nm;
	int i, curr;
	cin>>t;
	while(t != 0){
		cin>>ng>>nm;
		int bng = 0, bnm = 0, temp;
		for(i = 0; i < ng; i++){
			cin>>temp;
			if(temp >= bng){
				bng = temp;
			}
		}
		for(i = 0; i < nm; i++){
			cin>>temp;
			if(temp >= bnm){
				bnm = temp;
			}
		}
		if(bng >= bnm){
			cout<<"Godzilla"<<endl;
		}
		else{
			cout<<"MechaGodzilla"<<endl;
		}
		t--;
	}
}
