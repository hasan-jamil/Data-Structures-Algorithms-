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
	struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node));
	temp1 -> data = value;
	if(head == NULL || temp1 -> data < head -> data){
		temp1 -> link = head;
		head = temp1;
	} else {
		struct Node* pred = head;
		struct Node* p = pred -> link;
		while(p != NULL && temp1 -> data > p -> data){
			pred = p;
			p = p -> link;
		}
		pred -> link = temp1;
		temp1 -> link = p;
	}
}
int main(){
	head = NULL;	
	insert(2);
	insert(1);
	insert(6);
	insert(5);

	print();
}
