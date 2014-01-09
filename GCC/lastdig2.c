//
#include<stdio.h>
int main(){
	int t, a, s, c, i;
	char ch = 'a';
	long long int b;
	scanf("%d", &t);
	while(t != 0){
		while(ch != ' '){
			a = ch - 48;
			ch = getchar();
		}
		scanf("%lld", &b);
		if(a == 0){
			printf("0\n");
			t--;
			ch = 'a';
			continue;
		}
		if(b == 0){
			printf("1\n");
			t--;
			ch = 'a';
			continue;
		}
		int last[4];
		s = 1;
		c = 0;
		for(i = 0; i < 4; i++){
			s = (s * a) % 10;
			last[i] = s;
		}
		printf("%d\n", last[((b % 4) + 3) % 4]);
		t--;
		ch = 'a';
	}
	return 0;
}
