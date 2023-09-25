//singly linked list

#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*start=NULL;

void display(struct node *head){
    struct node *temp;
    temp=head;
    cout<<"Linked list is: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}//display ends

struct node *insertfirst(struct node *head) {
   // struct node *newn = (struct node*) malloc(sizeof(struct node));
   struct node *newn = new struct node;
    cout<<"enter data: ";
    cin>>newn->data;
    newn->next = head;
    head = newn;
    return head;
}

void insertlast(struct node *head){
     struct node *temp;
        //struct node *newn = (struct node *) malloc (sizeof(struct node));
        struct node *newn = new struct node;
        cout<<"Enter no: ";
        cin>>newn->data;
        newn->next=NULL;
       
             temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newn;
}


void insertdesired(struct node *head) {

    int x;
    cout<<"enter desired location's data: ";
    cin>>x;

    //struct node *newn = (struct node*) malloc(sizeof(struct node));
    struct node *temp,*newn = new struct node;
    cout<<"enter data: ";
    cin>>newn->data;

    if(head==NULL)
        cout<<"Empty";

    else{  
        //struct node *temp;
        temp = head;
        while(temp->data != x) {
            temp = temp->next;
        } 
        newn->next = temp->next;
        temp->next = newn;
    }  
}

struct node *deletefirst(struct node *head){
    // struct node *temp = head->next;
    // delete head;
    // head=temp;
    struct node *temp;
    temp=head;       
    head=temp->next;
    delete temp;
    return head;
}

void deletelast(struct node *head) {
    
    struct node *temp,*prev;
    temp = head;
    while(temp->next != NULL) {
        prev=temp;
        temp = temp->next;
    } 
    prev->next = NULL;
}

struct node createLL(struct node *head){
    int choice;

    while(1){
        struct node *temp;
        //struct node *newn = (struct node *) malloc (sizeof(struct node));
        struct node *newn = new struct node;
        cout<<"Enter data: ";
        cin>>newn->data;
        newn->next=NULL;

        if(head == NULL){
            head=newn;
        }

        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newn;
        }

        //enter choice to continue or exit
        cout<<"Enter 1 to continue, 2 to exit: "<<endl;
        cin>>choice;

        if(choice==2)
            break;
    }
    
    display(head);

    cout<<"\n\nInsertion at front:"<<endl;
    head=insertfirst(head);
    display(head);

    cout<<"\n\nInsertion at last:"<<endl;
    insertlast(head);
    display(head);

    cout<<"\n\nInsertion at Desired position:"<<endl;
    insertdesired(head);
    display(head);

    cout<<"\n\nDelete first node:"<<endl;
    head=deletefirst(head);
    display(head);

    cout<<"\n\nDelete last node:"<<endl;
    deletelast(head);
    display(head);

    return* head;
}


int main(){
    *start = createLL(start);
}