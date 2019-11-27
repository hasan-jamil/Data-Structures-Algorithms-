#include <bits/stdc++.h>

using namespace std;

struct Node {
	int data;
	struct Node* link; 
};

struct Node* head;

void print(){
	struct Node* temp;
	temp = head;
	while(temp != NULL){
		printf("%d ",temp -> data);
		temp = temp -> link;
	}
	printf("\n");
}

void insert(int value){
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp -> data = value;
	temp -> link = NULL;
	if(head == NULL){
		head = temp;
	} else{
		struct Node* t;
		t = head;
		while(t -> link != NULL){
			t = t -> link;
		}
		t -> link = temp;
	}
}

void DeleteNode(int position){
	if(position == 1){
		struct Node* temp;
		temp = head;
		head = head -> link;
		free(temp);
	} else {
		struct Node* temp1;
		temp1 = head;
		for (int i = 1; i <= position - 2; ++i){
			temp1 = temp1 -> link;
		}
		struct Node* temp2;
		temp2 = temp1 -> link;
		temp1 -> link = temp2 -> link;
		free(temp2);
	}
}
int main(){
	head = NULL;
	insert(9);
	insert(2);
	insert(3);
	insert(5);
	print();
	DeleteNode(3);
	print();
}
