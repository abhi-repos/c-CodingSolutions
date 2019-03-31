#include<bits/stdc++.h>
using namespace std;
int main()
    {
        long long n,i,query,index;
        cin>>n;
        long long a[n],sum=0;
        long double pointval,k,limit=0;
        vector <long double> avgArr;
        for(i=0;i<n;i++)
            cin>>a[i];
        avgArr.push_back(0);
        sort(a,a+n);
        for(i=0;i<n;i++)
            {
            sum+=a[i];
            pointval=(long double)sum/(i+1);
            limit=max(limit,pointval);
            avgArr.push_back(pointval);
            }
        cin>>query;
        while(query--)
            {
                cin>>k;
                if(k>limit)
                    cout<<n;    
                else
                    {
                    index=lower_bound(avgArr.begin(), avgArr.end(), k)-avgArr.begin();
                    cout<<index-1;
                    }
                cout<<endl;    
            }
    }
