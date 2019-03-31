#include<bits/stdc++.h>
using namespace std;
int sum(int l,int h,int ql,int qh,int *st,int i)
	{
	if(ql<=l&&qh>=h) 
		return st[i];
	if(ql>h||qh<l)
		return 0;
	int mid=(l+h)/2;
	return sum(l,mid,ql,qh,st,2*i+1)+sum(mid+1,h,ql,qh,st,2*i+2);
	}


int sg(int *arr, int ss, int se, int si, int *st)
{
    
    if (ss == se)
    {
        st[si] = arr[ss];
        return arr[ss];
    }
 
    int mid = (ss+se)/2;
    st[si] =  sg(arr, ss, mid,si*2+1,st) + sg(arr, mid+1, se,si*2+2,st);
    return st[si];
}

int update(int l,int h,int index,int *st,int i,int val)
	{
	if(index<l||index>h)
		return 0;
	st[i]+=val;
	if(l!=h)
		{
		int mid=(l+h)/2;
		update(l,mid,index,st,2*i+1,val);
		update(mid+1,h,index,st,2*i+2,val);
		}
	}



int main()
	{
	int n,x,y,i,u,v,q,val;
	char c;	
	cin>>n>>q;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	
	y=(int)(ceil(log2(n)));
	x=2*(int)pow(2, y) - 1; 
	int st[x]={};
	sg(a,0,n-1,0,st);
	
	while(q--)
		{
		cin>>c>>u>>v;
		u--;
		if(c=='u')
			{
			val=v-a[u];
			update(0,n-1,u,st,0,val);

			}
		else
			{
			v--;
			cout<<sum(0,n-1,u,v,st,0)<<endl;
			} 	
		}	
	}
