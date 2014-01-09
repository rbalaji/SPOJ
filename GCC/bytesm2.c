//
#include<stdio.h>
#include<stdlib.h>
int main(){
	int t, h, w, i, j;
	scanf("%d", &t);
	while(t != 0){
		scanf("%d", &h);
		scanf("%d", &w);
		int **tiles = (int**)calloc(h, sizeof(int*));
		for(i = 0; i < h; i++){
			tiles[i] = (int*)calloc(w + 2, sizeof(int));
		}
		for(i = 0; i < h; i++){
			for(j = 1; j <= w; j++){
				scanf("%d", &tiles[i][j]);
			}
		}
		int *prev = (int *)calloc(w + 2, sizeof(int));
		int *curr = (int *)calloc(w + 2, sizeof(int));
		for(i = 0; i < h; i++){
			for(j = 1; j <= w; j++){
				int big = prev[j - 1];
				if(prev[j] > big){
					big = prev[j];
				}
				if(prev[j + 1] > big){
					big = prev[j + 1];
				}
				curr[j] = big + tiles[i][j];
			}
			for(j = 1; j <= w; j++){
				prev[j] = curr[j];
			}
		}
		int big = curr[1];
		for(i = 2; i < w + 2; i++){
			if(curr[i] > big){
				big = curr[i];
			}
		}
		printf("%d\n", big);
		t--;
	}
	return 0;
}
