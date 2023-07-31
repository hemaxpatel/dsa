//linear search using array
#include<iostream>
using namespace std;

main(){
    int a[]={1,12,23,34,45,56,67,78,89,99};
    int n,i;
    //cout<<"Enter 10 numbers:"<<endl;
    //for(int i=0;i<10;i++){
    //    cin>>a[i];
    //}
    cout<<"Enter the no you what to find:";
    cin>>n;
    int flag=0;
    for(i=0;i<10;i++){
        if(a[i]==n){
            flag=1;
            break;
        }
        else {
            continue;
        }
    }
    if(flag==1)
        cout<<"Found\nNo is at postion "<<i+1;
    else{
        cout<<"Not Found";
    }
}