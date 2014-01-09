//
#include<stdio.h>
#include<string.h>
int main(){
	int Val[5];
	Val[1] = 0;		//q
	Val[2] = 0;		//h
	Val[3] = 0;		//t
	Val[4] = 1;		//Pizzas
	//int N, q = 0, h = 0, t = 0, pizzas = 1;
	char size[6];
	scanf("%d", &Val[0]);
	fflush(stdin);
	while(Val[0] != 0){
		fread(size, sizeof(char), 4, stdin);
		//scanf("%s", size);
		if(size[0] == '3'){
			Val[3]++;
		}
		else if(size[2] == '4'){
			Val[1]++;
		}
		else{
			Val[2]++;
		}
		Val[0]--;
	}
	printf("%d %d %d\n", Val[1], Val[2], Val[3]);
	Val[4] += Val[3];
	Val[1] -= Val[3];
	Val[4] += Val[2] / 2;
	Val[2] = Val[2] % 2;
	if(Val[2] == 1){
		Val[4]++;
		Val[1] -= 2;
	}
	if(Val[1] > 0){
		Val[4] += (Val[1] + 3) / 4;
	}
	//fwrite(&Val[4], sizeof(int), 1, stdout);
	printf("%d\n", Val[4]);
	return 0; 
}
