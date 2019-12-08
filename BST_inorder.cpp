void inorder(struct Node *r){
	// left root right 
	if (r == NULL) return;
	inorder(r -> left);
	cout << r -> data << " ";
	inorder(r -> right);
}
