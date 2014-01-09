//
#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	int n = 0, k;
	string s, s2;
	//char ch[10000];
	cin>>n;
	while(n>0){
		cin>>s2;
		//s2+=s2;
		int *t = (int*)malloc((s2.length() + 1)*sizeof(int));
		k = 0;
		int i, j, m, count = 0;
		t[0] = -1;
		t[1] = 0;
		//k = 0;
		for(j = 2; j <= s2.length(); j++){
			if(s2[j - 1] == s2[k]){
				k++;
			}
			else{
				k = 0;
			}
			t[j] = k;
		}
		
		for(j = 0; j <= s2.length(); j++){
			cout<<t[j]<<" ";
		}
		cout<<endl;
		cin>>s;
		i = 0;
		for(m = 0; (m + i) < s.length();){
			//cout<<s2[i]<<" "<<s[m + i]<<endl;
			if(s2[i] != s[m + i]){
				m = m + i - t[i];
				i = t[i];
				if(i == -1){
					i = 0;
				}
				//cout<<"m changed to "<<m<<endl;
			}
			else{
				i++;
				if(i >= s2.length()){
					cout<<m<<endl;
					count++;
					m = m + i - t[i];
					i = t[i];
					if(i == -1){
						i = 0;
					}
					//break;
				}
			}
			//cout<<m<<" "<<i<<" "<<t[i]<<endl;
		}
		cout<<"Count = "<<count<<endl;
		//cout<<k+1<<endl;
		n--;
	}
}
