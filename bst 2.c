#include<stdio.h>
#include<stdlib.h>
struct node{

    int key;

    struct node* left;
    struct node* right;
};
struct node* GetNewNode(int item)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;

    return temp;
}
struct node* inorder(struct node* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* node,int key)
{
         if(node==NULL)return GetNewNode(key);

         if(key<node->key)
         {
             node->left=insert(node->left,key);
         }
         else
         {
             node->right=insert(node->right,key);
         }
         return node;
}
struct node* minvaluenode(struct node* node)
{
    struct node* current=node;

    while(current->left!=NULL)current=current->left;

    return current;
}
struct node* delnode(struct node* node,int key)
{
    struct node* temp;
    if(node==NULL)return node;

         if(key<node->key)
         {
             node->left=delnode(node->left,key);
         }
         else if(key>node->key)
         {
             node->right=delnode(node->right,key);
         }
         else
         {
             if(node->left==NULL)
             {
                 temp=delnode(node->right,key);

                 return temp;
             }
             else if(node->right==NULL)
             {
                 temp=delnode(node->left,key);

                 return temp;
             }
             temp=minvaluenode(node->right);

             node->key=temp->key;

             temp->right=delnode(temp->right,temp->key);
         }
         return node;
}
int main()
{
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
         }
         else if(!strcmp(str,"pop"))
         {
             delnode(root,data);
             printf("output: ");
             inorder(root);
            printf("\n");

         }


     }
     return 0;


}

