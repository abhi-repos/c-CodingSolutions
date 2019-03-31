#include<bits/stdc++.h>
using namespace std;
int bt[27][200001]={};

void update(int row,int index,int v,int n)
	{
	while(index<=n)
		{
		bt[row][index]+=v;
		index+=index&(-index);
		}
	}

int sum(int row,int index)
	{
	int sum=0;	
	while(index>0)
		{
		sum+=bt[row][index];
		index-=index&(-index);
		}
	return sum;
	}


int bs(int row,int x,int n)
	{
     	int mid,l=1,h=n,v,ans;
     	while(l<=h)
		{
	        mid=((l+h)/2);
		v=sum(row,mid);
      		if(v>=x)
			{
			ans=mid;
			h=mid-1;
			}

		else
			l=mid+1;
	       	}
	  update(row,ans,-1,n);	
	  return ans;
	   }


int main()
	{
	int l,i,c,v,q,j;
	string str;
	char x;
	cin>>str;
	l=str.length();
	bool visited[l]={};
	for(i=0;i<l;i++)
		update(str[i]-'a',i+1,1,l);
	cin>>q;
	while(q--)
		{
		cin>>c>>x;
		v=bs(x-'a',c,l);
		visited[v-1]=1;	
		}
	for(i=0;i<l;i++)
		{
		if(visited[i]==0)
			cout<<str[i];
		}
	cout<<endl;
	}

