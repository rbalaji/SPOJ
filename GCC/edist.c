//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int T, i, j;
	char s1[2100], s2[2100];
	int *Val;
	scanf("%d", &T);
	while(T != 0){
		scanf("%s", s1);
		scanf("%s", s2);
		int l1 = strlen(s1);
		int l2 = strlen(s2);
//		Val = (int **)malloc((l1 + 1)*sizeof(int *));
		//Val = (int **)malloc((2)*sizeof(int *));
		//for(i = 0; i <= 1; i++){
		Val = (int *)malloc((l2 + 1)*sizeof(int));
			//Val[i][0] = i;
		//}
		for(j = 0; j <= l2; j++){
			Val[j] = j;
		}
		int curr;
		for(i = 1; i <= l1; i++){
			curr = i;
			int curr2;
			for(j = 1; j <= l2; j++){
				if(s1[i - 1] == s2[j - 1]){
					int min = Val[j - 1];
					if(min > (curr + 1)){
						min = curr + 1;
					}
					if(min > (Val[j] + 1)){
						min = Val[j] + 1;
					}
					curr2 = min;
					//printf("%c %c %d\n", s1[i - 1], s2[j - 1], Val[i][j]);
				}
				else{
					int min = Val[j - 1] + 1;
					if(min > (curr + 1)){
						min = curr + 1;
					}
					if(min > (Val[j] + 1)){
						min = Val[j] + 1;
					}
					curr2 = min;
					//printf("%c %c %d\n", s1[i - 1], s2[j - 1], Val[i][j]);
				}
				Val[j - 1] = curr;
				curr = curr2;
				//printf("%d ", Val[0][j - 1]);
			}
			Val[j - 1] = curr;
				//printf("%d\n", Val[0][j - 1]);
//			for(j = 0; j <= l2; j++){
//				Val[0][j] = Val[1][j];
//			}
		}
		Val[j - 1] = curr;
		
//		for(i = 1; i <= l1; i++){
//			Val[1][0] = i;
//			for(j = 1; j <= l2; j++){
//				if(s1[i - 1] == s2[j - 1]){
//					int min = Val[0][j - 1];
//					if(min > (Val[1][j - 1] + 1)){
//						min = Val[1][j - 1] + 1;
//					}
//					if(min > (Val[0][j] + 1)){
//						min = Val[0][j] + 1;
//					}
//					Val[1][j] = min;
//					//printf("%c %c %d\n", s1[i - 1], s2[j - 1], Val[i][j]);
//				}
//				else{
//					int min = Val[0][j - 1] + 1;
//					if(min > (Val[1][j - 1] + 1)){
//						min = Val[1][j - 1] + 1;
//					}
//					if(min > (Val[0][j] + 1)){
//						min = Val[0][j] + 1;
//					}
//					Val[1][j] = min;
//					//printf("%c %c %d\n", s1[i - 1], s2[j - 1], Val[i][j]);
//				}
//			}
//			for(j = 0; j <= l2; j++){
//				Val[0][j] = Val[1][j];
//			}
//		}
		
		printf("%d\n", Val[l2]);
		T--;
	}
	return 0;
}
