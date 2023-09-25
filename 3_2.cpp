//Doubly Linked List
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*start=NULL;

void display(struct node *head){
    struct node *temp=head;
    cout<<"Linked list is: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}//display ends

struct node *insertfirst(struct node *head) {
    struct node *temp=head;
    //struct node *newn = (struct node*) malloc(sizeof(struct node));
    struct node *newn=new struct node;
    cout<<"Enter data: ";
    cin>>newn->data;
    newn->next = NULL;
    newn->prev = NULL;
    
    temp->prev=newn;
    newn->next=temp;
    head=newn;
    return head;
}

void insertlast(struct node *head){
    struct node *newn = (struct node *) malloc (sizeof(struct node));
    //struct node *newn = new struct node;
    cout<<"Enter data: ";
    cin>>newn->data;
    newn->next=NULL;
    newn->prev=NULL;

    struct node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newn;
    temp->prev=temp;
}

void insertdesired(struct node *head) {

    int x;
    cout<<"Enter desired location's data: ";
    cin>>x;

    struct node * temp=head;
    //struct node *newn = (struct node*) malloc(sizeof(struct node));
    struct node *newn=new struct node;
    cout<<"Enter data: ";
    cin>>newn->data;
    newn->next=NULL;
    newn->prev=NULL;

    while(temp->data != x) {
        temp = temp->next;
    } 
    newn->next = temp->next;
    newn->prev=temp;
    temp->next->prev=newn;
    temp->next = newn;
    
    // struct node* posttemp=temp->next;
    // newn->next=temp->next;
    // newn->prev=temp;
    // posttemp->prev=newn;
    // temp->next=newn;
}

struct node *deletefirst(struct node *head){
    struct node *temp = head->next;
    temp->prev = NULL;
    head->next=NULL;
    delete head;
    head=temp;
    return head;
}

void countnode(struct node* head){
    int count=0;
    struct node *temp=head;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    cout<<"\n\nTotal Node: "<<count;
}

// void reversedisplay(struct node *head){
//     struct node *temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     cout<<"\nLinked list is: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->prev;
//     }
// }

struct node createLL(struct node *head){
    int choice;

    while(1){
        struct node *temp;
        //struct node *newn = (struct node *) malloc (sizeof(struct node));
        struct node *newn = new struct node;
        cout<<"Enter data: ";
        cin>>newn->data;
        newn->next=NULL;
        newn->prev=NULL;

        if(head == NULL){
            head=newn;
        }

        else{
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newn;
            newn->prev=temp;
        }

        //enter choice to continue or exit
        cout<<"Enter 1 to continue, 2 to exit: ";
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

    countnode(head);

    //reversedisplay(head);

    return* head;
}

int main(){
    *start = createLL(start);
}