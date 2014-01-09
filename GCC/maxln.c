//
#include<stdio.h>
int main(){
	int T, i = 1;
	long long int R;
	scanf("%d", &T);
	while(T != 0){
		scanf("%lld", &R);
		printf("Case %d: %lld.25\n", i, 4 * R * R);
		T--;
		i++;
	}
	return 0;
}
