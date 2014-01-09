//
#include<stdio.h>
#include<math.h>
int main(){
	int G, B;
	scanf("%d", &G);
	scanf("%d", &B);
	while(G != -1 || B != -1){
		if(G == 0){
			printf("%d\n", B);
		}
		else if(B == 0){
			printf("%d\n", G);
		}
		else{
			printf("%d\n", (G > B)?(int)ceil(G / (B + 1.0f)):(int)ceil(B / (G + 1.0f)));
		}
		scanf("%d", &G);
		scanf("%d", &B);
	}
	return 0;
}
