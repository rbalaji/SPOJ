//
#include<stdio.h>
int main(){
	int A, D, B, C, C2;
	int i, temp;
	scanf("%d", &A);
	scanf("%d", &D);
	while(A != 0 || D != 0){
		scanf("%d", &B);
		for(i = 1; i < A; i++){
			scanf("%d", &temp);
			if(temp < B){
				B = temp;
			}
		}
		scanf("%d", &C);
		scanf("%d", &temp);
		if(C < temp){
			C2 = temp;
		}
		else{
			C2 = C;
			C = temp;
		}
		for(i = 2; i < D; i++){
			scanf("%d", &temp);
			if(temp < C){
				C2 = C;
				C = temp;
			}
			else if(temp < C2){
				C2 = temp;
			}
		}
		if(B >= C2){
			printf("N\n");
		}
		else{
			printf("Y\n");
		}
		scanf("%d", &A);
		scanf("%d", &D);
	}
	return 0;
}
