//
#include<stdio.h>
int main(){
	long long int a, b, S, i;
	int t;
	scanf("%d", &t);
	while(t != 0){
		scanf("%lld", &a);
		scanf("%lld", &b);
		scanf("%lld", &S);
		long long int n = S / (a + b);
		n *= 2;
		if(S % (a + b) != 0){
			n++;
		}
		printf("%lld\n", n);
		long long int d = (b - a)/(n - 5);
		long long int p = a - 2 * d, q = b + 2 * d;
		if(d == 0){
			for(i = 1; i <= n; i++){
				printf("%lld ", p);
			}
			printf("\n");
			t--;
			continue;
		}
		for(i = p; i != q; i += d){
			printf("%lld ", i);
		}
		printf("%lld ", i);
		printf("\n");
		t--;
	}
	return 0;
}
