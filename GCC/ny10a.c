//
#include<stdio.h>
int main(){
	int P, i, j, index, x;
	scanf("%d", &P);
	while(P != 0){
		scanf("%d", &index);
		x = index;
		char seq[40] = "";
		int occ[8] = {0};
		scanf("%s", seq);
		int curstate;
		if(seq[0] == 'T'){
			if(seq[1] == 'T'){
				curstate = 1;
			}
			else{
				curstate = 2;
			}
		}
		else{
			if(seq[1] == 'T'){
				curstate = 3;
			}
			else{
				curstate = 4;
			}
		}
		for(i = 2; i < 40; i++){
				if(seq[i] == 'H'){
					occ[(2 * curstate) - 1]++;
				}
				else{
					occ[(2 * curstate - 1) - 1]++;
				}
			if(curstate % 2 == 0){
				if(seq[i] == 'T'){
					curstate = 3;
				}
				else{
					curstate = 4;
				}
			}
			else{
				if(seq[i] == 'T'){
					curstate = 1;
				}
				else{
					curstate = 2;
				}
			}
		}
		printf("%d ", x);
		for(i = 0; i < 8; i++){
			printf("%d ", occ[i]);
		}
		printf("\n");
		P--;
	}
	return 0;
}
