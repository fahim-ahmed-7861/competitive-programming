#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;

};
struct node* head;


struct node* GetNewNode(int x)
{
   struct node* temp=(struct node*)malloc(sizeof(struct node));

    temp->data=x;

    temp->prev=temp->next=NULL;

    return temp;
}
void Print()
{
    struct node* temp=head;

    printf("Forward:\n");

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insertafter(int x,int a)
{
   struct node* temp=head;
    struct node* san;
    struct node* newnode=GetNewNode(x);

    while(temp!=NULL)
    {
        if(temp->data==a)
        {
            newnode->prev=temp;

            san=temp->next;

            temp->next=newnode;

            newnode->next=san;

            san->prev=newnode;



            break;
        }
        else temp=temp->next;
    }
}
void InsertAtTail(int x)
{
    struct node* newnode=GetNewNode(x);
     struct node* temp=head;

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    while(temp->next!=NULL)temp=temp->next;

    temp->next=newnode;
    newnode->prev=temp;
    //temp->next=newnode;
}
void InsertAtHead(int x)
{
    struct node* newnode=GetNewNode(x);

    if(head==NULL)
    {
        head=newnode;
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void delhead()
{
    if(head==NULL)printf("Cannot delete\n");

    else
    {
        head=head->next;
        head->prev=NULL;
    }
}
void delany(int a)
{
struct node*  temp=head;

     struct node* back=temp;

      struct node* front=temp->next;

      front=front->next;
      temp=temp->next;

      while(temp!=NULL)
      {
          if(temp->data==a)
          {
              back->next=front;

              front->prev=back;

              break;
          }
          else
          {
              front=front->next;
              temp=temp->next;
              back=back->next;
          }
      }



}
void delAtTail()
{
    struct node* temp=head;

    struct node* san=temp->next;

    while(temp!=NULL)
    {
        if(san->next==NULL)
        {
            temp->next=NULL;
            break;
        }
        else{

            temp=temp->next;
            san=san->next;
        }
    }
}
void ReversePrint()
{
    struct node* temp=head;

    while(temp->next!=NULL)temp=temp->next;

    printf("Reverse:\n");

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}

int main()
{
     head=NULL;

     InsertAtHead(56);
     Print();
     InsertAtTail(16);
     Print();
     insertafter(156,56);
     Print();
     ReversePrint();
     delhead();
     Print();
     ReversePrint();
     delAtTail();
     Print();
     ReversePrint();
      InsertAtHead(776);
     Print();
     InsertAtTail(116);
     Print();
     insertafter(26,156);
     Print();
     ReversePrint();
     delany(26);
    // Print();
    // ReversePrint();
}
