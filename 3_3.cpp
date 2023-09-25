#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*start = NULL, s1;

void display(struct node *head) {
  
    cout<<"linked list : ";
    struct node *temp;
    temp = head;

    cout<<temp->data<<" ";
    temp=temp->next;

    while(temp!= head) {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

// void add_last(struct node *head) {
    
//     struct node *newn = (struct node*) malloc(sizeof(struct node));
//     cout<<"enter data for new last node : ";
//     cin>>newn->data;

//     struct node *temp = head;

//     while(temp->next != NULL) {
//         temp = temp->next;
//     }
    
//     temp->next = newn;
//     newn->next = head;

// }

struct node *insertfirst(struct node *head) {

    ///struct node *newn = (struct node*) malloc(sizeof(struct node));
    struct node *newn = new struct node;
    cout<<"enter data: ";
    cin>>newn->data;
    newn->next = head;
    struct node *temp = head; 
    while(temp->next != head) {
        temp = temp->next;
    } 
    temp->next = newn;
    head = newn;
    return head;
}

void deletelast(struct node *head) {
    
    struct node *temp = head;
    struct node * pretemp = head;
    temp = temp->next;
    while(temp->next != head) {
        pretemp = temp;
        temp = temp->next;
    }
    pretemp->next = head;
    delete  temp;
}

struct node createLL(struct node *head) {
    
    int choice;

    while(1) {

        struct node *temp;
        //struct node *newn = (struct node*) malloc(sizeof(struct node));
        struct node *newn = new struct node;
        cout<<"Enter data: ";
        cin>>newn->data;
        newn->next = head;

        if(head == NULL) {
            head = newn;
        }
        else {
            temp = head;
            while(temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newn;
        }
        cout<<"Enter 1 to continue, 2 to exit: ";
        cin>>choice;

        if(choice==2) {
            break;
        }

    }

    // add_last(head); 
    display(head);

    cout<<"\nInsertion at front:"<<endl;
    head = insertfirst(head);
    display(head);

    cout<<"\nDelete last node:"<<endl;
    deletelast(head);
    display(head);

}

int main() {
    *start = createLL(start);
}