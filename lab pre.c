#include<stdio.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* head;


struct node* getNode(int item)
{
    struct node* node=(struct node*)malloc(sizeof(struct node));

    node->data=item;
    node->prev=node->next=NULL;

    return node;
}

void print()
{
    struct node* t=head;

    while(t!=NULL)
    {
        printf("%d ",t->data);

        t=t->next;
    }


}

/*void insert(int x)
{
    struct node* newnode=getNode(x);

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    head->prev=newnode;

    newnode->next=head;

    head=newnode;
}*/
void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		//del=newNode;
		return;
	}
	head->prev = newNode;
	newNode->next = head;
	head = newNode;
	//del=newNode;
}


int main()
{
    head=NULL;

   InsertAtHead(78);

    Print();

    return 0;
}
