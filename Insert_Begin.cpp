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

void insertBegin(int value){
	struct Node* temp = (struct Node*) malloc (sizeof(struct Node));
	temp -> data = value;
	temp -> link = head;
	head = temp;
}

int main(){
	head = NULL;	
	insertBegin(1);
	insertBegin(2);
	insertBegin(3);

	print();
}
