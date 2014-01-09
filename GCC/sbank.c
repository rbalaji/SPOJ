//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct trieNode{
	char key[40];
	long int value;
	int count;
	struct trieNode *next;
	struct trieNode *child;
}tNode;

tNode *root = NULL;

tNode *createNode(long int Value){
	tNode *temp = (tNode *)malloc(sizeof(tNode));
	//temp->key = "";
	temp->value = Value;
	temp->count = 1;
	temp->next = NULL;
	temp->child = NULL;
	return temp;
}

void insertVal(tNode *curr, char num[][9], int pos){
	if(pos == 6){
		return;
	}
	long int acc = atol(num[pos]);
	int flag2 = 0;
	if(curr->child == NULL){
		tNode *temp = createNode(acc);
		curr->child = temp;
		curr = curr->child;
	}
	else if(curr->child->value > acc){
		tNode *temp = createNode(acc);
		temp->next = curr->child;
		curr->child = temp;
		curr = curr->child;
	}
	else{
		curr = curr->child;
		if(curr->value == acc){
			//insertVal(curr, num, pos + 1);
			flag2 = 1;
		}
		else{
			tNode *temp;
			int flag = 0;
			for(temp = curr; temp->next != NULL; temp = temp->next){
				if(temp->next->value > acc){
					tNode *temp2 = createNode(acc);
					temp2->next = temp->next;
					temp->next = temp2;
					curr = temp2;
					flag = 1;
					break;
				}
				else if(temp->next->value == acc){
					curr = temp->next;
					flag = 1;
					flag2 = 1;
					break;
				}
			}
			if(flag == 0){
				tNode *temp2 = createNode(acc);
				temp->next = temp2;
				curr = temp2;
			}
		}
	}
	if(pos == 5){
		if(flag2 == 1){
			curr->count++;
		}
		int i;
		strcpy(curr->key, "");
		for(i = 0; i < 6; i++){
			strcat(curr->key, num[i]);
			strcat(curr->key, " ");
		}
	}
	insertVal(curr, num, pos + 1);
}

void traverse(tNode *curr){
	if(curr->child == NULL){
		printf("%s%d\n", curr->key, curr->count);
		if(curr->next == NULL){
			return;
		}
		traverse(curr->next);
	}
	else{
		traverse(curr->child);
		if(curr->next == NULL){
			return;
		}
		else{
			traverse(curr->next);
		}
	}
}

int main(){
	int t, n;
	char num[6][9];
	scanf("%d", &t);
	while(t != 0){
		root = createNode(0);
		scanf("%d", &n);
		while(n != 0){
			scanf("%s", num[0]);
			scanf("%s", num[1]);
			scanf("%s", num[2]);
			scanf("%s", num[3]);
			scanf("%s", num[4]);
			scanf("%s", num[5]);
			insertVal(root, num, 0);
			n--;
		}
		traverse(root);
		if(t != 1){
			printf("\n");
		}
		t--;
	}
	return 0;
}
