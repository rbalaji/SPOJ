//
#include<stdio.h>
#include<stdlib.h>
long *arr;
long long invs;
void inv(long *arr, long a, long b){
	if(b == a + 1){
		return;
	}
	long m = (a + b) / 2;
	inv(arr, a, m);
	inv(arr, m, b);
	long i, j, k = 0;
	long *temp = (long*)malloc((b - a) * sizeof(long));
	for(i = a, j = m; i < m || j < b;){
		if(j >= b){
			temp[k] = arr[i];
			i++;
		}
		else if(i >= m){
			temp[k] = arr[j];
			j++;
		}
		else{
			if(arr[i] > arr[j]){
				temp[k] = arr[i];
				invs += (b - j);
				i++;
			}
			else{
				temp[k] = arr[j];
				j++;
			}
		}
		k++;
	}
	for(i = 0; i < k; i++){
		arr[a + i] = temp[i];
	}
}
int main(){
	long t, n, i;
	scanf("%ld", &t);
	while(t != 0){
		scanf("%ld", &n);
		arr = (long*)malloc(n * sizeof(long));
		invs = 0;
		for(i = 0; i < n; i++){
			scanf("%ld", &arr[i]);
		}
		inv(arr, 0, n);
		printf("%lld\n", invs);
		t--;
	}
	return 0;
}
