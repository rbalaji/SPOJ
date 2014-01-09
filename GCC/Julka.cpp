//
#include<iostream>
using namespace std;
int sum[101];
int dif[101];
int res[101];
void sumify(string s){
	int i, j = 0;
	for(i = 0; i<101-s.length(); i++){
		sum[i] = 0;
	}
	for(i = 101-s.length(); i<101; i++){
		sum[i] = s[j]-48;
		j++;
	}
}

void difify(string s){
	int i, j = 0;
	for(i = 0; i<101-s.length(); i++){
		dif[i] = 0;
	}
	for(i = 101-s.length(); i<101; i++){
		dif[i] = s[j]-48;
		j++;
	}
}

void aify(){
	int i, carry = 0, rem = 0, prod;
	for(i = 101; i>=0; i--){
		res[i] = (sum[i]+dif[i]+carry)%10;
		carry = (sum[i]+dif[i]+carry)/10;
	}
	for(i = 0; i<=101; i++){
		prod = rem*10+res[i];
		res[i] = prod/2;
		rem = prod%2;
	}
}

void sify(){
	int i, carry = 0, rem = 0, prod;
	for(i = 101; i>=0; i--){
		res[i] = (10+sum[i]-dif[i]+carry)%10;
		carry = (10+sum[i]-dif[i]+carry)/10-1;
	}
	for(i = 0; i<=101; i++){
		prod = rem*10+res[i];
		res[i] = prod/2;
		rem = prod%2;
	}
}

void disp(){
	int i, j = 0, flag = 0;
	for(i = 0; i<101; i++){
		if(flag == 0 && res[i] != 0){
			flag = 1;
			cout<<res[i];
		}
		else if(flag == 1){
			cout<<res[i];
		}
		else if(i == 100){
			cout<<res[i];
		}
	}
	cout<<endl;
}

main(){
	string s;
	int i = 0;
	while(i<10){
		cin>>s;
		sumify(s);
		cin>>s;
		difify(s);
		aify();
		disp();
		sify();
		disp();
		i++;
	}
}
