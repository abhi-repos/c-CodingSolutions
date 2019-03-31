#include<bits/stdc++.h>
using namespace std;
int main()
    {
    int n,i,total=0,maximum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
        {
        total+=arr[i];
        if(total<=0)
            total=0;
        maximum=max(maximum,total);
        }
    cout<<maximum<<endl;
    }
