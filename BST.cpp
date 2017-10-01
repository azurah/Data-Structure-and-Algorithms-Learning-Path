//Binary Search Tree
#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node* left;
	node* right;
};

//Creation of new Node -----------------------------------------------------------------------------------------------------------------
node* newNode(int data){
	node* temp = new node;
	temp->val = data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

//Insertion of data into BST-----------------------------------------------------------------------------------------------------------
void insert(int data,node* head){
	node* h = head;
	if(data>h->val){
		if(h->right==NULL){
			node * new_node = newNode(data);
			h->right = new_node;
		}
	 	else{
			insert(data,h->right);
		}
	}
	else {
		if(h->left==NULL){
			node * new_node = newNode(data);
			h->left = new_node;
		}
	 	else{
			insert(data,h->left);
		}
	}	
}
//Traversal-----------------------------------------------------------------------------------------------------------------------------
void preorder(node* head){//preorder---------------
	node* h = head;
	cout<<h->val<<" ";
	if(h->left!=NULL) preorder(h->left);
	if(h->right!=NULL) preorder(h->right);
}
void inorder(node* head){//inorder----------------
	node* h = head;
	if(h->left!=NULL) inorder(h->left);
	cout<<h->val<<" ";
	if(h->right!=NULL) inorder(h->right);
}
void postorder(node* head){//postorder------------
	node* h = head;
	if(h->left!=NULL) postorder(h->left);
	if(h->right!=NULL) postorder(h->right);
	cout<<h->val<<" ";
}
//Searching key value in BST------------------------------------------------------------------------------------------------------------
node* search(int key,node* root){
	if(root==NULL || key==root->val) return root;
	if(key>root->val) search(key,root->right);
	else search(key,root->left);
}
// MIN and MAX of BST-------------------------------------------------------------------------------------------------------------------
node* Min(node* root){
	node* h = root;
	while(h->left) 
		h=h->left;
	return h;
}
node* Max(node* root){
	node* h = root;
	while(h->right) 
		h=h->right;
	return h;
}

//successor and predecessor-------------------------------------------------------------------------------------------------------------
node* successor(node* root){
	if (root!=NULL || root->right!=NULL) return Min(root->right);
}
node* predecessor(node* root){
	if (root!=NULL || root->left!=NULL) return Max(root->left);
}

//--------------------------------------------------------      Main function     ------------------------------------------------------
int main(){
	int numberOfNodes,data;
	cin>>numberOfNodes;
	
	//tree creation
	cin>>data;
	node* root = new node;
	root->val = data;
	root->left = NULL;
	root->right = NULL;
	
	//insertion
	for (int i = 0; i < numberOfNodes-1; ++i){
		cin>>data;
		insert(data,root);
	}
	
	//traversal
	cout<<"preorder = "<<endl;
	preorder(root);
	cout<<"inorder = "<<endl;
	inorder(root);
	cout<<"postorder = "<<endl;
	postorder(root);

	//Searching 
	cout<<"Enter value to search in Tree = ";
	cin>>data;
	node* resultNode = search(data,root);
	if(resultNode==NULL)	cout<<"Not present!!"<<endl;
	else	cout<<"Presnt in Tree!!"<<endl;
	
	//minimum and maximum
 	resultNode = Min(root);
	cout<<"Minimum valuer in BST = "<<resultNode->val<<endl;
	resultNode = Max(root);
	cout<<"Maximum valuer in BST = "<<resultNode->val<<endl;
	
	//successor and predecessor
 	resultNode = successor(root);
	cout<<"successor of root of BST = "<<resultNode->val<<endl;
	resultNode = predecessor(root);
	cout<<"predecessor of root of BST = "<<resultNode->val<<endl;
}

/*
Sample input and output-----------------------------------------------
10
6 9 7 13 5 3 8 1 4 2
preorder = 6 5 3 1 2 4 9 7 8 13
inorder = 1 2 3 4 5 6 7 8 9 13
postorder = 2 1 4 3 5 8 7 13 9 6
Enter value to search in Tree = 10
Not present!!
Minimum valuer in BST = 1
Maximum valuer in BST = 13
successor of root of BST = 7
predecessor of root of BST = 5
----------------------------------------------------------------------
*/
