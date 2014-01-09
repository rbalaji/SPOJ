//
#include<stdio.h>
#include<stdlib.h>
struct node{
	struct node* next;
	int value;
};
struct node *stak = NULL;
int** adj;
int* count;
void push(int t){
	struct node *temp = (struct node *) malloc( sizeof(struct node) ); ;
	temp->next = stak;
	temp->value = t;
	stak = temp;
}
int pop(){
	if(stak == NULL){
		return 0;
	}
	int temp = stak->value;
	stak = stak->next;
	return temp;
}
int top(){
	return stak->value;
}
int main(){
	push(1);
	printf("%d\n", top());
	printf("%d\n", pop());
	printf("%d\n", pop());
	return 0;
}
