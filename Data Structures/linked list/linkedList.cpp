// Handle Linked list

// Step 1: Create linked list
void CreateList(List &l){
	l.pHead = null;
	l.pTail = null;
}

// Step 2: Create new Node
Node* CreateNode(Data x){
	Node *p;
	p = new Node;
	if(p == NULL)
		exit(1);
	p->Info = x;
	p->pNext = NULL;
	return p;
}