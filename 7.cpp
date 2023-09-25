#include<iostream>
using namespace std;
struct node{
    char data;
    struct node *next;
};

node *Push(struct node *top,char C){
    struct node *newn=new node;
    newn->data=C;
    newn->next=top;
    top=newn;
    return top;
}

node *Pop(struct node *top){
    struct node *temp = top;
    if (top == NULL)
        cout << "Stack Underflow" << endl;
    else
    {
        top = top->next;
        delete temp;
    }
    return top;
}

int main()
{
    int A;
    cout<<"Enter the number to test cases: ";
    cin>>A;
    while(A--){
        struct node *Top=NULL;
        int Balance=1;
        string str;
        cout<<"Enter the String: ";
        cin>>str;
        for(int i=0;str[i]!='\0';i++){
            if(str[i]=='[' || str[i]=='{' || str[i]=='('){
                Top=Push(Top,str[i]);
            }
            else if(str[i]==']' || str[i]=='}' || str[i]==')'){
                if(Top==NULL){
                    Balance=0;
                    break;
                }
                else if((str[i]==']' && Top->data=='[') || (str[i]=='}' && Top->data=='{') || (str[i]==')' && Top->data=='(')){
                    Top=Pop(Top);
                }
                else{
                    Balance=0;
                    break;
                }
            }
        }
        cout<<Balance<<endl;
    }
    return 0;
}