#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;

    struct node* next;

    struct node* prev;

};
 struct node* head;
 int count=0;

 struct node* GetNewNode(int x)
 {
     struct node* temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=temp->prev=NULL;
     count++;
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
     count--;
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
     count--;
 }
 void delhead()
 {
     if(head->next==NULL)printf("Cannot delete\n");

     else
     {
         head=head->next;

         head->prev=NULL;
     }
     count--;
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
     int data,a;
     char str[100];


     while(scanf("%s",str)==1)
     {
         scanf("%d",&data);
         if(!strcmp(str,"pushhead"))
         {
            InsertAtHead(data);
            Print();
            ReversePrint();
         }
         else if(!strcmp(str,"pushtail"))
         {  if(count==0)
           {
             printf("first need a head input:\n");
             continue;
           }
            InsertAtTail(data);
            Print();
            // ReversePrint();
         }
          else if(!strcmp(str,"pushafter"))
         {
             if(count==1)
             {
                 printf("cannot\n");
                 continue;
             }
             printf("Input a number in linked list:\n");
             scanf("%d",&a);
            insertafter(data,a);
            Print();
             ReversePrint();
         }


     }
     return 0;


}
