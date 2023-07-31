//with binary search
#include<iostream>
using namespace std;
main()
{
    int t;
    cout<<"Enter the size of array: ";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"Enter value of array: ";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+2;j<n;j++)
            {
               int w=0;
               int start=i+1;
               int end =j-1;
               double avg=(a[i]+a[j])/2.0;
                while(start<=end)
                {
                    int mid=(start+end)/2;
                    if(avg<a[mid])
                    {
                        end=mid-1;
                    }
                        else{
                        start=mid+1;
                    }
                    if(w<(a[i]-a[mid])*(a[mid]-a[j]))
                     w=(a[i]-a[mid])*(a[mid]-a[j]);
                }
                sum=sum+w;
            }
        }
        cout<<"Sum of weights of this array is "<<sum<<endl;
    }
}