//linear search
#include<iostream>
using namespace std;
main()
{
    int t,tot,start,en;
    cout<<"Enter the size of array: ";
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cout<<"Enter value of array: ";
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+2;j<n;j++)
            {
                int l=0,w=0,m=0,tempw=0,maxw=0;
                start=i;
                en=j;
                while(start<en)
                {
                    for(int p=start+1;p<=en-1;p++)
                    {
                        for(int q=p+1;q<=en;q++)
                        {
                            tempw=(a[i]-a[p])*(a[p]-a[q]);
                            if(tempw>maxw)
                            {
                                maxw=tempw;
                            }
                        }
                    }
                    start++;
                }
                sum=sum+maxw;
            }
        }
        cout<<"Sum of weights of this array is "<<sum<<endl;
    }
}
