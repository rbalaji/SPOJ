//
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
	int t, i, j;
	scanf("%d", &t);
	while(t != 0){
		int E, F;
		scanf("%d", &E);
		scanf("%d", &F);
		int weight = F - E, temp;
		int *min = (int*)calloc((weight + 1), sizeof(int));
		int N;
		scanf("%d", &N);
		int **wts = (int**)malloc(N * sizeof(int*));
		for(i = 0; i < N; i++){
			wts[i] = (int*)malloc(2 * sizeof(int));
			scanf("%d", &wts[i][0]);
			scanf("%d", &wts[i][1]);
		}
		for(i = 1; i <= weight; i++){
			int flag = 0, small = 0;
			for(j = 0; j < N; j++){
				if((i - wts[j][1]) >= 0){
					if(min[i - wts[j][1]] >= 0){
						temp = min[i - wts[j][1]] + wts[j][0];
						if(temp < small || flag == 0){
							flag = 1;
							small = temp;
						}
					}
				}
			}
			if(flag == 1){
				min[i] = small;
			}
			else{
				min[i] = -1;
			}
		}
		if(min[weight] == -1){
			printf("This is impossible.\n");
		}
		else{
			printf("The minimum amount of money in the piggy-bank is %d.\n", min[weight]);
		}
		t--;
	}
	return 0;
}
