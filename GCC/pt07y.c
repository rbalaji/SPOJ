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
	struct node *temp = (struct node *)malloc(sizeof(struct node));
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
void recurse(int a, int N){
//	printf("a = %d\n", a);
	int i, j;
	
//	for(i = 0; i < N; i++){
//		for(j = 0; j < N; j++){
//			printf("%d\t", adj[i][j]);
//		}
//		printf("\n");
//	}

	for(i = 0; i < N; i++){
		if(adj[a - 1][i] == 1){
			adj[a - 1][i] = 0;
			adj[i][a - 1] = 0;
			push(i + 1);
			recurse(i + 1, N);
		}
	}
	int n = pop();
	if(n == 0){
		return;
	}
	count[n - 1] = 1;
}
int main(){
	int N, M, i, j;
	int a, b;
	scanf("%d", &N);
	scanf("%d", &M);
	adj = (int**)calloc(N, sizeof(int*));
	count = (int*)calloc(N, sizeof(int));
	for(i = 0; i < N; i++){
		adj[i] = (int*)calloc(N, sizeof(int));
	}
	for(i = 0; i < M; i++){
		scanf("%d", &a);
		scanf("%d", &b);
		adj[a - 1][b - 1] = 1;
		adj[b - 1][a - 1] = 1;
	}
	if(N != (M + 1)){
		printf("NO\n");
		return 0;
	}
	push(a);
	recurse(a, N);
	for(i = 0; i < N; i++){
		if(count[i] == 0){
			printf("NO\n");
			return 0;
		}
	}
	printf("YES\n");
	return 0;
}
