//
#include <stdio.h>
int main(){
	long int t, ans = 0, n;
	scanf("%ld", &t);
	while(t != 0){
		scanf("%ld", &n);
		ans = (ans ^ n);
		t--;
	}
	printf("%ld", ans);
	return 0;
}
