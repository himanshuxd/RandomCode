#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct BstNode{
	int data;
	struct BstNode *left;
	struct BstNode *right;
};

struct BstNode *root = NULL;

struct BstNode* insertNode(struct BstNode* root, int data){
	if(root == NULL){
		printf("\nCurrent node %d is being created\n",data);
		root = (struct BstNode*)malloc(sizeof(struct BstNode));
		root->data = data;	
		root->left = root->right = NULL;
	}
	else if(data < root->data){
		printf("Traversing %d now\n",root->data);
		root->left = insertNode(root->left, data);
	}
	else if(data > root->data){
		printf("Traversing %d now\n",root->data);
		root->right = insertNode(root->right, data);
	}
	return root;
}

void inOrder(struct BstNode* root){
	if(root != NULL){
		inOrder(root->left);
		printf("%d ",root->data);
		inOrder(root->right);
	}
}

void preOrder(struct BstNode* root){
	if(root != NULL){
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}

void postOrder(struct BstNode* root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		printf("%d ",root->data);
	}
}

struct BstNode* minVal(struct BstNode* root){ // will find the min value from a given root node's sub-tree
	struct BstNode* temp = root;
	while(temp->left != NULL)
		temp = temp->left;
	
	printf("\nMin in right sub tree is %d\n",temp->data);
	return temp;
	
}

struct BstNode* deleteNode(struct BstNode* root, int data){  // This function is called recursivelu until and unless we get the correct node
	
	if(root == NULL){ // Tree does not exist
		printf("\nTree does not exist\n");
		return root;
	}
	
	else if(data < root->data) // Searching for the data in left sub-tree				// This 
		root->left = deleteNode(root->left, data);										// two else-if
	else if(data > root->data) // Searching for the data in right sub-tree				//	will only 
		root->right = deleteNode(root->right, data);									// search the node
		
	
	else{  //Got the node !!!, now decide how to delete and where to delete
	
		if(root->left == NULL && root->right == NULL){ // case 1 : leaf nodes
			free(root);
			root = NULL;
		}
		
		else if(root->left == NULL){ // Case 2.1 : Node with right sub-tree only
			struct BstNode* temp = root;
			root = root->right;
			free(temp);
		}
		
		else if(root->right == NULL){ //Case 2.2 : Node with left sub-tree only
			struct BstNode* temp = root;
			root = root->left;
			free(temp);
		}
		
		else{ // Case 3 : Node with left and right sub-tree
			struct BstNode* temp = minVal(root->right); // Finding minimum value from the right sub-tree
			root->data = temp->data;
			root->right = deleteNode(root->right, temp->data);  //Delete the minVal node which is swapped previously
		}
	}
	return root; // Will return the root for every condition, as it is written outside the main if-else
}

int isbst(struct BstNode* root){
	if(root==NULL){
	return 1;

}
	if(root->left!=NULL && root->left->data>root->data){
	return 0;
	
	}
	if(root->right!=NULL && root->right->data<root->data){
    	return 0;
		
		}
	if(!isbst(root->left) || !isbst(root->right))
			{
return 0;

	}
				return 1;
}
int maxdepth(struct BstNode* root){
	int ldepth,rdepth;
	if(root==NULL)
	return 0;
	else{
		ldepth=maxdepth(root->left);
		rdepth=maxdepth(root->right);
		if(ldepth>rdepth)
		return (ldepth+1);
		else
		return (rdepth+1);
	}
}
int isbst(struct BstNode* root);
int maxdepth(struct BstNode* root);
int main(){
	root = NULL;
	int val, ch,e,f;
	while(1){
		printf("\n\n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Delete\n6. Exit\n\nChoice :: ");
		scanf("%d",&ch);
		switch(ch){
			case 1 : printf("\nData to be inserted :: ");
					 scanf("%d",&val);
					 root = insertNode(root, val); //root will store the main-root when it is called for the 1st time, and the current-root when called recursively
					 break;
			
			case 2 : printf("\nInorder Traversal\n");
					 inOrder(root);
					 break;
			
			case 3 : printf("\nPreorder Traversal\n");
					 preOrder(root);
					 break;
			
			case 4 : printf("\nPostorder Traversal\n");
					 postOrder(root);
					 break;
			
			case 5 : printf("\nEnter the node to be deleted :: ");
					 scanf("%d",&val);
					 root = deleteNode(root, val);
					 break;
			
			case 6 : e=isbst(root);
			if(e==0)
			printf("notbst");
			else
			printf("bst");
					 break;
			case 7 :f=maxdepth(root);
			if(f==0)
					 printf("tree no exists");
					 else
					 printf("%d",f);
					 break;
			case 8 : exit(0);
					 break;
			default : printf("\nInvalid Choice!!!\n");
					  break;
					 
		}
	}
}
