//
#include<iostream>
#include<fstream>
using namespace std;
int nk[101][102] = {{0}}, max = 0;
main(){
	int P, i = 0, id, n, k, a, b, max;
	cin>>P;
	nk[1][0] = 2;
	nk[2][0] = 3;
	nk[2][1] = 1;
	max = 2;
	while(i < P){
		cin>>id;
		cin>>n;
		cin>>k;
		if(n>max){
			for(a = max+1; a <= n; a++){
				nk[a][0] = nk[a-1][0] + nk[a-2][0];
				for(b = 1; b <= n; b++){
					nk[a][b] = nk[a-1][b] + nk[a-1][b-1] + nk[a-2][b] - nk[a-2][b-1];
				}
			}
		}
		cout<<id<<" "<<nk[n][k]<<endl;
		i++;
	}
}
