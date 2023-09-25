//using array
#include<iostream>
using namespace std;
#define max 5
//int max=5;
int top=-1;
int stack[max];

void push(int x){
    if(top==max-1)
        cout<<"\nStack is Overflow";

    else{
        top++;
        stack[top]=x;
    }
}

void pop(){
    if(top==-1)
        cout<<"\nStack is Undeflow";
    
    else{
        int x = stack[top];
        top--;
        cout<<"\nValue of x is "<<x;
    }
}

// int peep(int i){
//     if(top-i+1==-1)
//         cout<<"\nStack is Underflow";
    
//     else{
//         return (stack[top-i+1]);
//     }
// }

void display(){
    cout<<"\nStack is: ";
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main(){
    while(1){
        int x;
        cout<<"\nEnter 1 for Push \n2 for Pop \n3 for exit: ";
        cin>>x;

        if(x==1){
            int n;
            cout<<"Enter data: ";
            cin>>n;
            push(n);
            display();
        }

        else if(x==2){
            pop();
            display();
        }

        else if(x==3){
            break;
        }

        else{
            cout<<"Enter a valid number";
        }
    }

    // push(1);
    // push(2);
    // push(3);
    // push(4);
    // display();
    // pop();
    // pop();
    // display();
    // peep(1);
    return 0;
}