#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,i,j,sum,count,k;
    string str,s;
    cin>>t;
    while(t--)
        {
	sum=0,count=0;
            cin>>n;
            long long int a[n];
            cin>>str;
            for(i=0;i<n;i++)
                cin>>a[i];
            for(i=2;i<=n;i++)
                {
                for(j=0;j<=(n-i);j++)
                    {count=0;
                        s=str.substr(j,i);
                        if(s[j]==s[j+i-1])
                            {
                            if(j+1==i-1)
                                {
                                sum++;
                                continue;
                                }
                            for(k=i+1;k<j;k++)
                                count+=a[k];
                            if(count==0)
                                sum++;
                            
                            }
                    }
                }
	cout<<sum<<endl;	
        }
    return 0;
}
