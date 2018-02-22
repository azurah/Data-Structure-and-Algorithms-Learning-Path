# 1.TRAVERSING
### Inorder
	void INORDER(root)
		if root != NULL
			INORDER(root.left)
			print root.key
			INORDER(root.right)
			
### Preorder
	void PREORDER(root)				
		if root != NULL
			print root.key
			PREORDER(root.left)
			PREORDER(root.right)
			
### Postorder
	void POSTORDER(root)
		if root != NULL
			POSTORDER(root.left)
			POSTORDER(root.right)
			print root.key

# 2.SEARCH<both recursively and iteratively
### Recursive Search
	node* SEARCH(key,root)
		if root == NULL or key == root.key
			return root
		if key < root.key
			SEARCH(key,root.left)
		else
			SEARCH(key,root.right)

### Iterative Search
	node* SEARCH(key,root)
		while root != NULL and key != root.key
			if key < root.key
				root = root.left
			else
				root = root.right
		return root

# 3.INSERT

	void INSERT(data,root)
		if root == NULL 
			node* newNode = GetNewNode(data);
			root = newNode
			return
		if data > root.key
			if root.right != NULL
				INSERT(root.right)
			else
				node* newNode = GetNewNode(data);
				root.right = newNode
				return
		else
			if root.left != NULL
				INSERT(root.left)
			else
				node* newNode = GetNewNode(data);
				root.left = newNode
				return

# 4.DELETE
	void DELETE(key,root)
	

# 5.MIN and MAX value in BST
### Minimun value
	node* MIN(root)
		while root.left != NULL
			root = root.left
		return root

### Maximum value
	node* MAX(root)	
		while root.right != NULL
			root = root.right
		return root

# 6.HEIGHT<No. of edges in longest path from given node to leaf node>

	int HEIGHT(node)
		if node == NULL
			return -1
		heightLeft = HEIGHT(node.left)
		heightRight = HEIGHT(node.right)
		return ( heightRight > heightLeft ? heightRight : heightLeft ) + 1

# 7.SUCCESSOR - PREDECESSOR
### Successor
	node* SUCCESSOR(node) 
		if node != NULL			//for now concidering only case in which node has non empty right child 
			return MIN(node.right)
	

### Predecessor
	node* PREDECESSOR(node)
		if node != NULL			//for now concidering only case in which node has non empty left child 
			return MAX(node.left)

