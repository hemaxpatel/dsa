#include<iostream>
using namespace std;

main(){
    int a[]={1,12,23,34,45,56,67,78,89,99};
    int n;
    cout<<"Enter the no you want to find:";
    cin>>n;
    int flag=0;
    int lower=0,upper=9;
    int mid=(lower+upper)/2;

    while(lower<=upper){
        if(a[mid]>n){
            upper=mid-1;
            mid=(lower+upper)/2;
        }

        else if(a[mid]==n){
            flag=1;
            break;
        }

        else{
            lower=mid+1;
            mid=(lower+upper)/2;
        }
    }

    if(flag==1)
        cout<<"Found\nNo is at postion "<<mid+1;
    else
        cout<<"Not Found";
}
