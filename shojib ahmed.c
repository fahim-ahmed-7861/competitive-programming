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
     temp->next=temp->prev=NULL;
 }

void ReversePrint()
 {
     struct node* temp=head;

     if(temp==NULL)return;

     while(temp->next!=NULL)temp=temp->next;
     printf("REverse: ");

     while(temp!=NULL)
     {
         printf("%d ",temp->data);

         temp=temp->prev;
     }
     printf("\n");

 }
 void Print()
 {
     struct node* temp=head;
     printf("Forward: ");

     while(temp!=NULL)
     {
         printf("%d ",temp->data);

         temp=temp->next;
     }
     printf("\n");
 }
 void delany(int x)
 {
     struct node* temp=head;

     struct node* back=head;

     struct node* front=head->next;

     front=front->next;

     temp=temp->next;

     while(temp!=NULL)
     {
         if(temp->data==x)
         {
             front->prev=back;

             back->next=front;

             break;
         }

         else
         {
             temp=temp->next;
             front=front->next;
             back=back->next;
         }
     }
     return;


 }
 void delAtTail()
 {
     struct node* t=head;

     struct node* h=t->next;

     if(t->next==NULL)
     {
         printf("cannot\n");
         return;
     }

     while(t->next!=NULL)
     {
         if(h->next==NULL)
         {
             t->next=NULL;
             break;
         }

         else
         {
             h=h->next;
             t=t->next;
         }
     }
 }
 void delhead()
 {
     if(head->next==NULL)printf("Cannot delete\n");

     else
     {
         head=head->next;

         head->prev=NULL;
     }
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
         return ;
     }
     while(temp->next!=NULL)temp=temp->next;


    temp->next=newnode;
    newnode->prev=temp;

 }

 void InsertAtHead(int x)
 {
     struct node* newnode=GetNewNode(x);

     if(head==NULL)
     {
         head=newnode;
         return ;
     }
     head->prev=newnode;
     newnode->next=head;
     head=newnode;

 }

int main()
{
     head=NULL;

     InsertAtHead(66);Print();

       InsertAtTail(94);Print();
       insertafter(88,66);Print();
       InsertAtTail(224);Print();
       InsertAtTail(914);Print();

       delAtTail();Print();

     delany(88);Print();
     InsertAtTail(999); Print();
	insertafter(59,8); Print();
	InsertAtTail(589); Print();
	InsertAtHead(779); Print();
	delAtTail();Print();ReversePrint();
	InsertAtHead(1000);Print();ReversePrint();



}
