#include<bits/stdc++.h>
using namespace std;
int main()
    {
    long long n,k,stack=0,queue=0,i,j,result=0;
    cin>>n>>k;
    int input[n];
    for(i=0;i<n;i++)
        cin>>input[i];
    for(i=n-k;i<n;i++)
        queue+=input[i];
    j=n-k;    
    for(i=0;i<k;i++)
        {
        stack+=input[i];
        queue-=input[j];
        j++;
        result=max(result,stack+queue);
        }
    cout<<result<<endl;   
    }
