
# TRAVERSING--------------------------------------
## INORDER(root)				
	if root != NULL
		INORDER(root.left)
		print root.key
		INORDER(root.right)
		
## PREORDER(root)				
	if root != NULL
		print root.key
		PREORDER(root.left)
		PREORDER(root.right)
		
## POSTORDER(root)				
	if root != NULL
		POSTORDER(root.left)
		POSTORDER(root.right)
		print root.key

# SEARCH----------------------------------------
## SEARCH(key,root)
	if root == NULL or key == root.key
		return root
	if key < root.key
		SEARCH(key,root.left)
	else
		SEARCH(key,root.right)

## SEARCH(key,root)
	while root != NULL and key != root.key
		if key < root.key
			root = root.left
		else
			root = root.right
	return root

# INSERT------------------------------------------
