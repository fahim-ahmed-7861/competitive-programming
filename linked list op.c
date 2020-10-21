#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;

    struct node* next;

    struct node* prev;
};
int count=0;
struct node* head;
struct node* GetNewNode(int x)
{
    struct node* temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;

    temp->prev=temp->next=NULL;

    count++;

    return temp;
}
void delany(int x)
{
    struct node* temp=head;
    struct node* back=head;
    struct node* front=temp->next;
    front=front->next;
    temp=temp->next;

    while(temp!=NULL)
    {
        if(temp->data==x)
        {
            back->next=front;
            front->prev=back;
            break;
        }
        else{

            front=front->next;
            temp=temp->next;
            back=back->next;

        }
    }
    count--;

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
void ReversePrint()
{
    printf("Reverse: ");

    struct node* temp=head;

    while(temp->next!=NULL)temp=temp->next;

    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    printf("\n");
}
void delAtail( )
{
    struct node* temp=head;
    struct node* san=temp->next;

     if(head->next==NULL)
     {
         printf("Cannot delete\n");
         return;
     }

    while(temp!=NULL)
    {
        if(san->next==NULL)
        {
            temp->next=NULL;
            break;
        }
        else
        {
            temp=temp->next;
            san=san->next;
        }
    }
    count--;


}
void delhead()
{
    if(head->next==NULL)printf("Cannot delete\n");

    else{

        head=head->next;

        head->prev=NULL;
    }
    count--;
}
void insertafter(int x,int a)
{
      struct node* newnode=GetNewNode(x);

      struct node* temp=head;
       struct node* san;

      while(temp!=NULL)
      {
         if(temp->data==a)
         {
             san=temp->next;

             temp->next=newnode;
             newnode->prev=temp;

             newnode->next=san;
             san->prev=newnode;
             break;


         }
         else
         {
             //san=san->next;
             temp=temp->next;
         }
      }


}
void InsertAtTail(int x)
{
    struct node* temp=head;
     struct node* newnode=GetNewNode(x);

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;



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





       return;
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




