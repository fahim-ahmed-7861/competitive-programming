/* Doubly Linked List implementation */
#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;
struct Node* del;
struct Node* temp;
struct Node* r,s;
struct Node* k;// global variable - pointer to head node,del node.

//Creates a new Node and returns pointer to it.
struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->prev = NULL;

	newNode->next = NULL;
	return newNode;
}
void delany(int x)
{
     struct Node* temp = head;
     struct Node* front;
     struct Node* back;

     back=head;

     front=head->next;
     front=front->next;
     temp=temp->next;

	while(temp!= NULL)  {

//
		if(temp->data==x)
		{

		    back->next=front;

		    front->prev=back;


		    break;
		}

         else  {

                temp= temp->next;
                back=back->next;
                front=front->next;

                }
         }


         return;


}


void delhead( )
{

		if(head->next==NULL)
        {
            printf("cannot delete .this is last node\n");
            return ;
        }
        else
        {
            head=head->next;
		head->prev=NULL;
        }


}

void delAtTail( )
{
    struct Node* t=head;

     struct Node* h=t->next;

      if(t->next==NULL)
      {
          printf("Only one node so cannot delete\n");
          return;
      }

     while(t->next != NULL)
     {

        if(h->next== NULL)
        {
            t->next=NULL;

            break;
        }

        else{
           t = t->next;
            h=h->next;}
        // del->next=t;
     }


}

//Inserts a Node at head of doubly linked list

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

void insertafter(int x,int a)
{

    struct Node* temp = head;
     struct Node* san,bim;
    struct Node* newNode = GetNewNode(x);
	while(temp!= NULL)  {
//
		if(temp->data==a)
		{

		    san=temp->next;
		    newNode->prev=temp;

		    break;
		}

         else   temp= temp->next;
	}

	temp->next = newNode;


	newNode->next=san;
	san->prev=newNode;

	//temp = san;


}

//Inserts a Node at tail of Doubly linked list
void InsertAtTail(int x) {
	//struct Node* temp = head;
	temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->next != NULL) temp = temp->next; // Go To last Node
	temp->next = newNode;
	newNode->prev = temp;

	//del=temp;

}

//Prints all the elements in linked list in forward traversal order
void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

//Prints all elements in linked list in reverse traversal order.

void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	// Traversing backward using prev pointer
	printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int main() {

	/*Driver code to test the implementation*/
	head = NULL; // empty list. set head as NULL.

	// Calling an Insert and printing list both in forward as well as reverse direction.
	//InsertAtTail(2); Print(); //ReversePrint();
	InsertAtTail(4); Print(); //ReversePrint();
	//InsertAtHead(6); Print(); //ReversePrint();
	InsertAtTail(8); Print(); //ReversePrint();


	//InsertAtHead(158); Print();
	InsertAtTail(659); Print();

	//delAtTail();Print();

	//InsertAtHead(198); Print();
	InsertAtTail(999); Print();
	insertafter(59,8); Print();
	InsertAtTail(589); Print();
	InsertAtHead(779); Print();
	//delAtHead(); Print();




	//head=head->next;
	//head=head->next;
	//printf("%d\n",head->data);
  // delAtTail();Print();
    //after(180,158);Print();
     delAtTail();Print();
   // after(155,6);Print();


   // delany(4);Print();ReversePrint();
    // after(184,155);Print();

    // delAtTail();Print();



    //delAtTail();Print();
    //delAtTail();Print();
    //  delAtTail();Print();
    //delAtTail();
      //delAtTail();




     //delAtTail();Print();
     //InsertAtTail(89); Print();
	//after(15,2);Print();



}

