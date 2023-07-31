/*
https://www.hackerrank.com/contests/launchpad-1-winter-challenge/challenges/binary-search-advanced.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int i,a[t],l=0,u=t-1,m;
    
    for(i=0;i<t;i++)
        cin>>a[i];
    
    int k;
    cin>>k;
    
    while(l<=u){
        m=(l+u)/2;
        
        if(a[m]>k){
            u=m-1;
        }
        
        if(a[m]<k){
            l=m+1;
        }
        
        if(a[m]==k){
            if(a[m-1]!=k){
                for(u=u;a[u]!=k;u--)
                    continue;
                cout<<m<<" "<<u<<" "<<u-m+1;
            }
            
            else if(a[m+1]!=k){
                for(l=l;a[l]!=k;l++)
                    continue;
                cout<<l<<" "<<m<<" "<<m-l+1;
            }
            
            else{
                for(l=l;a[l]!=k;l++)
                    continue;
                for(u=u;a[u]!=k;u--)
                    continue;
                
                int c=1;
                for(i=l;i!=u;i++)
                    c++;
                cout<<l<<" "<<u<<" "<<c;
            }
            break;
        }
        if(l>u)
            cout<<"-1 -1 0";
    }
    return 0;
}