void preorder(struct Node *r){
	if(r == NULL) return;
	cout << r -> data  << " "; // root print
	// left subtree 
	preorder(r -> left); // left visit
	preorder(r -> right);
}
