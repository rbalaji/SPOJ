//
#include<stdio.h>
#include<math.h>
int main(){
	long int N;
	scanf("%ld", &N);
	while(N != -1){
		N--;
		if(N % 6 != 0){
			printf("N\n");
			scanf("%ld", &N);
			continue;
		}
		N = N / 6;
		int n = (int)((-1.0f + sqrt(1.0f + 8.0f*N)) / 2.0f);
		if((n * (n + 1) / 2) == N){
			printf("Y\n");
		}
		else{
			printf("N\n");
		}
		scanf("%ld", &N);
	}
	return 0;
}
