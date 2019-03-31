#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,i,len,sumCountBit=0,j;
    string binary;
    cin>>n;
    int setBit[1000000]={},mx=0;
    for(i=0;i<n;i++)
        {
        cin>>binary;
        len=binary.length();
        mx=max(mx,len);
        for(j=0;j<len;j++)
            {
            if(binary[j]=='1')
                setBit[j]=1;
            }
        }
    for(i=0;i<mx;i++)
        {
        if(setBit[i]==1)
            sumCountBit++;
        }
    if(sumCountBit%2==0)
        cout<<"B"<<endl;
    else
        cout<<"A"<<endl;
    cout<<sumCountBit<<endl;
}
