//
#include<iostream>
#include<fstream>
#include<cstdio>
#include<climits>
#include<stdlib.h>
using namespace std;
main(){
	int n = 0, k;
	//string s, s2;
	//char ch[10000];
	//cin>>n;
	ifstream fin;
	fin.open("input.txt");
	while(0 == 0){
		//cin>>s2;
		//s2+=s2;
		fin>>n;
		char *s2 = (char*)malloc(n*sizeof(char));
		int *t = (int*)malloc((n + 1)*sizeof(int));
		
		k = 0;
		int i, j, m, count = 0;
		char ch;
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		ch = fgetchar();
		i = 0;
		while(ch!='\n'){
			s2[i] = ch;
			i++;
			ch = getchar();
		}
		t[0] = -1;
		t[1] = 0;
		//k = 0;
		for(j = 2; j <= n; j++){
			if(s2[j - 1] == s2[k]){
				k++;
			}
			else{
				k = 0;
			}
			t[j] = k;
		}
		/*
		for(j = 0; j <= n; j++){
			cout<<t[j]<<" ";
		}
		*/
		cout<<endl;
		//cin>>s;
		i = 0;
		char next;
		next = getchar();
		m = 0;
		while(next != '\n'){
			//cout<<s2[i]<<" "<<ch<<endl;
			if(s2[i] != next){
				m = m + i - t[i];
				i = t[i];
				if(i == -1){
					i = 0;
				}
				//cout<<"m changed to "<<m<<endl;
			}
			else{
				i++;
				if(i >= n){
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
			next = getchar();
			//cout<<m<<" "<<i<<" "<<t[i]<<endl;
		}
		//cout<<"Count = "<<count<<endl;
		//cout<<k+1<<endl;
		//n--;
		//break;
	}
}
