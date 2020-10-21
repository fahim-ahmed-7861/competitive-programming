// C program to demonstrate insert operation in binary search tree
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);


         printf("%d ", root->key);


        inorder(root->right);


    }
}
void printPreorder(struct node* node)
{
     if (node == NULL)
          return;

     /* first print data of node */
     printf("%d ", node->key);

     /* then recur on left sutree */
     printPreorder(node->left);

     /* now recur on right subtree */
     printPreorder(node->right);
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
         printf("%d ", root->key);

        postorder(root->left);

       // printf("%d ", root->key);
        postorder(root->right);

       //  printf("%d ", root->key);

    }
}

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}

// Driver Program to test above functions
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct node* root=NULL;
     int data;
     char str[100];


     while(scanf("%s",str)==1)
     {
         scanf("%d",&data);
         if(!strcmp(str,"push"))
         {
            if(root==NULL)root=insert(root,data);

            else insert(root,data);

                         printf("output: ");

            inorder(root);
              printf("\n");
         printPreorder(root);
            printf("\n");
         }
         else if(!strcmp(str,"pop"))
         {
           //  root=delnode(root,data);
             printf("output: ");
             inorder(root);
            printf("\n");

         }


     }
    // print inoder traversal of the BST
    //inorder(root);
    printf("\n");
    //postorder(root);

    return 0;
}
