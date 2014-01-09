//
#include <stdio.h>
#include <stdlib.h>
int main(){
	int N, i, j, M;
	scanf("%d", &N);
	long int **sum = (long int **)malloc(N * sizeof(long int *));
	long int **ans = (long int **)malloc(N * sizeof(long int *));
	//long int *V = (int *)malloc(N * sizeof(long int));
	for(i = 0; i < N; i++){
		sum[i] = (long int *)malloc(N * sizeof(long int));
		ans[i] = (long int *)malloc(N * sizeof(long int));
	}
	i = j = 0;
	M = N;
	while(M != 0){
		scanf("%d", &sum[0][j]);
		ans[0][j] = sum[0][j];
		j++;
		M--;
	}
	for(i = 1; i < N; i++){
		for(j = i; j < N; j++){
			sum[i][j] = sum[i - 1][j] + sum[0][j - i];
			long int s1 = (ans[i -1][j] + sum[i - 1][j] + ans[0][j - i]);
			long int s2 = (ans[i -1][j - 1] + sum[i - 1][j - 1] + ans[0][j]);
			ans[i][j] = (s1 > s2) ? s1 : s2;
		}
		//printf("\n");
	}
//	for(i = 0; i < N; i++){
//		for(j = 0; j < N; j++){
//			printf("%d\t", sum[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	for(i = 0; i < N; i++){
//		for(j = 0; j < N; j++){
//			printf("%d\t", ans[i][j]);
//		}
//		printf("\n");
//	}
	printf("%ld\n", ans[N - 1][N - 1]);
	return 0;
}
