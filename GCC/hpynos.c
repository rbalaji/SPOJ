//
#include <stdio.h>
//#include <map>
int main(){
	//std::map<int, int> nums;
	long int input;
	scanf("%ld", &input);
	int s, x = 0;
	while(input != 0){
		int l = input % 10;
		input = input / 10;
		x += l*l;
	}
	if(x == 1){
		printf("1\n");
		return 0;
	}
	//nums.insert(std::pair<int, int>(x, x));
	int count = 1;
	while(1 == 1){
		s = 0;
		while(x != 0){
			int l = x % 10;
			x = x / 10;
			s += l*l;
		}
		if(s == 4 || s == 16 || s == 37 || s == 58 || s == 89 || s == 145 || s == 42 || s == 20){
			count = 0;
			break;
		}
		//std::map<int, int>::iterator it = nums.find(s);
		count++;
		if(s == 1){
			break;
		}
		x = s;
	}
	if(count == 0){
		printf("-1\n");
	}
	else{
		printf("%d\n", count);
	}
	return 0;
}
