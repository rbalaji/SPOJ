//
#include<stdio.h>
#include<string.h>
int main(){
	char *ch = NULL;
	scanf("%s", &ch);
	char ch2 = ch[strlen(ch) - 1];
	if(ch2 == '0'){
		printf("2\n");
		return 0;
	}
	printf("1\n%c\n", ch2);
	return 0;
}
