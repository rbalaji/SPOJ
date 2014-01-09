//
#include<stdio.h>
long long int ncr(long long int n, long long int r){
//	if(r == 0){
//		return 1;
//	}
//	long long int temp = n * ncr(n - 1, r - 1);
//	temp = temp / r;
//	return temp;
	long long int i, combo = 1;
	for(i = 1; i <= r; i++){
		combo *= n - (r - i);
		combo /= i;
	}
	return combo;
}
int main(){
	long long int n, r, t, i;
	scanf("%lld", &t);
	while(t != 0){
		scanf("%lld", &n);
		scanf("%lld", &r);
		n = n - r;
		r--;
		long long int ans = ncr(n + r, n);
		printf("%lld\n", ans);
		t--;
	}
	return 0;
}
