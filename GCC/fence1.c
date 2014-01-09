//
#include<stdio.h>
#include<math.h>
int main(){
	int L;
	float pi = atan(1.0)*4.0;
	scanf("%d", &L);
	while(L != 0){
		printf("%.2lf\n", (L * L)/(2.0f * pi));
		scanf("%d", &L);
	}
	return 0;
}
