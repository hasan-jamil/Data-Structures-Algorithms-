void postOrder(struct Node *r){
	// left right root
	if (r == NULL) return;
	postOrder(r -> left);
	postOrder(r -> right);
	cout << r -> data << " ";
}
