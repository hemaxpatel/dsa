// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//     struct node *next;
// }*top=NULL;

// void push(struct node *top){
//     struct node *temp,*newn=new struct node;
//     if(newn=NULL){
//         cout<<"\nStack is Overflow";
//     }

//     else{
//         cout<<"Enter data: ";
//         cin>>newn->data;
//         newn->next=NULL;

//         if(top==NULL){
//             top=newn;
//         }

//         else{
//             temp=top;
//             newn->next=temp;
//             top=newn;
//         }
//     }
// }

// void pop(struct node *top){
//     if(top==NULL){
//         cout<<"\nStack is Underflow";
//     }

//     else{
//         struct node *temp;
//         temp=top->next;
//         delete top;
//         top=temp;
//     }
// }

// void display(struct node *top){
//     struct node *temp;
//     temp=top;
//     cout<<"\nStack is: ";
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
// }

// int main(){
//     push(top);
//     push(top);
//     display(top);
//     pop(top);
//     display(top);
// }

#include<iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
}*top = NULL;

struct node *push(struct node *top) {
     
    struct node *temp;
    struct node *newn = (struct node*) malloc(sizeof(struct node));
    cout<<"Enter data: ";
    cin>>newn->data;
    
    if(newn == NULL) {
        cout<<"Stack is Overflow"<<endl;
    }
    else {
        
        if(top == NULL) {
            top = newn;
            newn->next = NULL;
        }
        else {
            temp = top;
            newn->next = temp;
            top = newn;
        }
    }

    return top;
}

struct node *pop(struct node *top) {
    
    struct node *temp;

    if(top == NULL) {
        cout<<"Stack is Underflow"<<endl;
    }
    else{
        temp = top->next;
        free(top);
        top = temp;
    }

    return top;

}

void display(struct node *top) {

    struct node* temp;
    temp = top;
    cout<<"Stack : ";
    while(temp != NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    while(1){
        int x;
        cout<<"\nEnter 1 for Push \n2 for Pop \n3 for exit: ";
        cin>>x;

        if(x==1){
            top=push(top);
            display(top);
        }

        else if(x==2){
            top=pop(top);
            display(top);
        }

        else if(x==3){
            break;
        }

        else{
            cout<<"Enter a valid number";
        }
    }
    return 0;
    // top=push(top);
    
    // top=push(top);
    
    // top=push(top);

    // top=push(top);
    
    // display(top);
    
    // cout<<"After 2 pop operation : ";

    // top=pop(top);

    // top=pop(top);
    
    // display(top);

    // cout<<"\n22dce068";
    
}
