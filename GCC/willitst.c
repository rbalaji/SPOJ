//
#include<stdio.h>
int main(){
	long long int n;
	scanf("%lld", &n);
	if((n < 0) || (n & (n - 1)) == 0){
		printf("TAK\n");
		return 0;
	}
	printf("NIE\n");
	return 0;
}
