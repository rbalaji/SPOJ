//
#include<iostream>
#include<stdlib.h>
using namespace std;
main(){
	int n = 0;
	string s, s2;
	//char ch[10000];
	cin>>n;
	while(n>0){
		cin>>s2;
		s2+=s2;
		int *t = (int*)malloc(s2.length()*sizeof(int));
		int i, j, k;
		for(j = 0; j < s2.length(); j++){
			t[j] = -1;
		}
		k = 0;
		for(j = 1; j < s2.length(); j++){
			i = t[j - k - 1];
			while(i != -1 && s2[j] != s2[i + k + 1]){
				if(s2[j] < s2[i + k + 1]){
					k = j - i - 1;
				}
				i = t[i];
			}
			if(i == -1 && s2[j] != s2[i + k + 1]){
				if(s2[j] < s2[i + k + 1]){
					k = j;
				}
				t[j - k] = -1;
			}
			else{
				t[j - k] = i + 1;
			}
		}
		cout<<k+1<<endl;
		n--;
	}
}
