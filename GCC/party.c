//
#include<stdio.h>
#include<stdlib.h>
int **arr;

void inv(int **arr, int a, int b){
	if(b == a + 1){
		return;
	}
	int m = (a + b) / 2;
	inv(arr, a, m);
	inv(arr, m, b);
	int i, j, k = 0;
	int **temp = (int**)malloc((b - a) * sizeof(int));
	for(i = 0; i < (b - a); i++){
		temp[i] = (int*)malloc(2 * sizeof(int));
	}
	for(i = a, j = m; i < m || j < b;){
		if(j >= b){
			temp[k][0] = arr[i][0];
			temp[k][1] = arr[i][1];
			i++;
		}
		else if(i >= m){
			temp[k][0] = arr[j][0];
			temp[k][1] = arr[j][1];
			j++;
		}
		else{
			if(arr[i][1] > arr[j][1]){
				temp[k][0] = arr[i][0];
				temp[k][1] = arr[i][1];
				i++;
			}
			else if(arr[i][1] < arr[j][1]){
				temp[k][0] = arr[j][0];
				temp[k][1] = arr[j][1];
				j++;
			}
			else{
				if(arr[i][0] < arr[j][0]){
					temp[k][0] = arr[i][0];
					temp[k][1] = arr[i][1];
					i++;
				}
				else{
					temp[k][0] = arr[j][0];
					temp[k][1] = arr[j][1];
					j++;
				}
			}
		}
		k++;
	}
	for(i = 0; i < k; i++){
		arr[a + i][0] = temp[i][0];
		arr[a + i][1] = temp[i][1];
	}
}
int main(){
	int b, n, i, c, f;
	scanf("%d", &b);
	scanf("%d", &n);
	while(b != 0 || n != 0){
		c = 0;
		f = 0;
		arr = (int**)malloc(n * sizeof(int*));
		for(i = 0; i < n; i++){
			arr[i] = (int*)malloc(2 * sizeof(int));
			scanf("%d", &arr[i][0]);
			scanf("%d", &arr[i][1]);
		}
		inv(arr, 0, n);
		printf("\n");
		for(i = 0; i < n; i++){
			if(c + arr[i][0] > b){
				continue;
			}
			c += arr[i][0];
			f += arr[i][1];
		}
		printf("%d %d\n", c, f);
		//arr2 = (int*)malloc(n * sizeof(int));
		scanf("%d", &b);
		scanf("%d", &n);
	}
	return 0;
}
