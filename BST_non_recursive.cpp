#include <bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node  *left;
	struct Node *right;
};

struct Node *root;

void insert(int value){
	struct Node *newNode = (struct Node*) malloc(sizeof(struct Node));
	newNode -> data = value;
	newNode -> right = NULL; newNode -> left = NULL;
	if(root = NULL){
		root = newNode;
	} else {
		struct Node * temp = root;
		while(1){
			if(newNode -> data <= temp -> data){
				// left
				if(temp -> left == NULL){
					temp -> left = newNode;
					break;
				} 
				else temp = temp -> left;
			} else {
				// right
				if(temp -> right == NULL){
					temp -> right = newNode;
					break;
				} 
				else temp = temp -> right;
			}
		}
	}
}

int main(){
	root = NULL;
	insert(55);
	insert(40);
	insert(80);
	insert(34);
}
