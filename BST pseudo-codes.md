
# 1.TRAVERSING
### void INORDER(root)				
	if root != NULL
		INORDER(root.left)
		print root.key
		INORDER(root.right)
		
### void PREORDER(root)				
	if root != NULL
		print root.key
		PREORDER(root.left)
		PREORDER(root.right)
		
### void POSTORDER(root)				
	if root != NULL
		POSTORDER(root.left)
		POSTORDER(root.right)
		print root.key

# 2.SEARCH<both recursively and iteratively
### node* SEARCH(key,root)
	if root == NULL or key == root.key
		return root
	if key < root.key
		SEARCH(key,root.left)
	else
		SEARCH(key,root.right)

### node* SEARCH(key,root)
	while root != NULL and key != root.key
		if key < root.key
			root = root.left
		else
			root = root.right
	return root

# 3.INSERT
### INSERT()

# 4.DELETE
### DELETE()

# 5.MIN and MAX value in BST
### node* MIN(root)
	while root.left != NULL
		root = root.left
	return root

### node* MAX(root)
	while root.right != NULL
		root = root.right
	return root

# 6.HEIGHT<No. of edges in longest path from given node to leaf node>
### int HEIGHT(node)
	if node == NULL
		return -1
	heightLeft = HEIGHT(node.left)
	heightRight = HEIGHT(node.right)
	return ( heightRight > heightLeft ? heightRight : heightLeft ) + 1

# 7.SUCCESSOR - PREDECESSOR
### node* SUCCESSOR(node) 
	if node != NULL			//for now concidering only case in which node has non empty right child 
		return MIN(node.right)
	

### node* PREDECESSOR(node)
	if node != NULL			//for now concidering only case in which node has non empty left child 
		return MAX(node.left)

