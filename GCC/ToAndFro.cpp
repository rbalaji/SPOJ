//
#include<iostream>
#include<cstring>
using namespace std;
main(){
	int n, i, r, j;
	string s;
	cin>>n;
	while(n!=0){
		cin>>s;
		r = s.length()/n;
		for(j = 0; j < n; j++){
			for(i = 0; i<r; i++){
				if(i%2 == 0){
					cout<<s[i*n+j];
				}
				else{
					cout<<s[(i+1)*n-(j+1)];
				}
			}
		}
		cout<<endl;
		cin>>n;
	}
}
