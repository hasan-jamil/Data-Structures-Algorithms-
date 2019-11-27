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
int main(){
	head = NULL;	
	insert(2);
	insert(5);
	insert(6);

	print();
}
