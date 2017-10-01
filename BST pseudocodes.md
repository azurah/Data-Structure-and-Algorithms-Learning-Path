
# TRAVERSING
a.INORDER(root)				
	if root != NULL
		INORDER(root.left)
		print root.key
		INORDER(root.right)
		
a.PREORDER(root)				
	if root != NULL
		print root.key
		PREORDER(root.left)
		PREORDER(root.right)
		
c.POSTORDER(root)				
	if root != NULL
		POSTORDER(root.left)
		POSTORDER(root.right)
		print root.key

------------------2.SEARCH------------------
a.SEARCH(key,root)
	if root == NULL or key == root.key
		return root
	if key < root.key
		SEARCH(key,root.left)
	else
		SEARCH(key,root.right)

b.SEARCH(key,root)
	while root != NULL and key != root.key
		if key < root.key
			root = root.left
		else
			root = root.right
	return root

-----------------3.INSERT--------------------
