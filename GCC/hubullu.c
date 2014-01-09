//
#include<stdio.h>
int main(){
	long long t, n;
	int m;
	scanf("%lld", &t);
	while(t != 0){
		scanf("%ld", &n);
		scanf("%d", &m);
		if(m == 0){
			printf("Airborne wins.\n");
		}
		else{
			printf("Pagfloyd wins.\n");
		}
		t--;
	}
	return 0;
}
