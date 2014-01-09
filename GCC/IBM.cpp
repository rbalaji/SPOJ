//
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int scur = 0;
int gcur = 0;
int lcheck(string strc, string strt, int cur){
	//scur++;
	cout<<"Checking\n"<<strc<<" "<<strc[cur]<<"\n"<<strt<<" "<<strt[cur]<<endl;
	cout<<"Length of check: "<<cur<<endl;
	if(cur == strc.length()){
		//gcur = cur;
		return -1;
	}
	if(strt[cur]<strc[cur]){
		return 1;
	}
	else if(strt[cur]>strc[cur]){
		//gcur-=1;
		//cout<<"Reducing gcur to "<<gcur<<endl;
		//return 1;
	}
	if(strt[cur] == strc[cur]){
		gcur = cur+1;
		return lcheck(strc, strt, cur+1);
	}
	return 0;
}
int bcheck(string str, int j){
	if(j == 0){
		return j;
	}
	if(str[(j-1)%str.length()] == str[j%str.length()]){
		cout<<"At "<<j<<endl;
		return bcheck(str, (j-1+str.length())%str.length());
	}
	else{
		return j;
	}
}
main(){
	string str, strc, strt;
	int N, i = 0, j, cur = 0, bv = 1;
	int flag = 0;
	cin>>N;
	while(i<N){
		bv = 1;
		cin>>str;
		strc = str;
		for(j = 1; j < str.length(); j++){
			//flag = 0;
			gcur = 0;
			strt = str.substr(j) + str.substr(0, j);
			cout<<"Starting\n"<<strc<<"\n"<<strt<<" at j = "<<j<<endl;
			cur = lcheck(strc, strt, 0);
			//gcur-=2;
			cout<<"Gcur = "<<gcur<<endl;
			if(cur == 1){
				strc = strt;
				bv = j+1;
				//cout<<"Setting b to "<<bv<<endl;
				flag = 1;
			}
			if((gcur)>=0){
				cout<<"Changing j: "<<(j+gcur)<<endl;
				j = j + (gcur);
				//cout<<"j at "<<j<<endl;
				//j = bcheck(str, j);
			}
/*			if(str[j]<str[cur]){
				
				cur = lcheck(strc, strt);
			}*/
		}
		//bv = bcheck(str, bv+str.length()) + 1;
		//cout<<"Number of iterations: "<<scur<<endl;
		cout<<bv<<endl;
		//cout<<(str.substr((bv-1)%str.length()) + str.substr(0, (bv-1)%str.length()))<<endl;
		cur = 0;
		i++;
	}
}


