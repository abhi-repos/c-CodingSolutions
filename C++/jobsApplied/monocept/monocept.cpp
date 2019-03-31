#include<bits/stdc++.h>
using namespace std;
int factor[1000001]={};
int main()
	{
	int n,q,i,cnt,nmbr,x,pstn,j;
	factor[1]=1;
	for(i=2;i<=1000000;i++)
		{
		if(factor[i]==0)
			{
			factor[i]=i;
			for(j=i*2;j<=1000000;j+=i)
				{
				if(factor[j]==0)
					factor[j]=i;
				}
			}
		} 
	cin>>n>>q;
	int arr[n];
	list <int> link;
	list <int> :: iterator lower;
	for(i=0;i<n;i++)
		cin>>arr[i];
	for(i=0;i<n;i++)
		{
		cnt=0;
		nmbr=arr[i];
		while(nmbr>1)
			{
			nmbr/=factor[nmbr];
			cnt++;
			}
		link.push_back(cnt);
		}
	sort(link.begin(),link.end());
	for(i=1;i<n;i++)
		link[i]+=link[i-1];
	while(q--)
		{
		cin>>x;
		if(x>=link[n-1])
		    cout<<n<<endl;
		else
		    {
    		lower = lower_bound (link.begin(), link.end(), x);
    		pstn=lower- link.begin();
    		if(link[pstn]==x)
    			cout<<++pstn<<endl;
    		else
    			cout<<pstn<<endl;
		    }
		}
	} 
	

	
	 
