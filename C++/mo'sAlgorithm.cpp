/*
input:
9 3
1 1 2 1 3 4 5 2 8
0 4
1 3
2 4

output:
8
4
6

*/

#include<bits/stdc++.h>
using namespace std;
struct Query
	{
	int l,r,pos;
	};

int block;
bool compare(Query x, Query y)
	{
  
	if (x.l/block != y.l/block)
        	return x.l/block < y.l/block;
   	return x.r < y.r;
	}

int main()
	{
	int n,m,i,x,y,cl,cr,cs; 
	cin>>n>>m;
	block=sqrt(n);
	int a[n],arr[m];
	Query q[m];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<m;i++)
		{
		cin>>x>>y;
		q[i].l=x,q[i].r=y,q[i].pos=i;
		}
	sort(q,q+m,compare);
	cl=0,cr=-1,cs=0;
	for(i=0;i<m;i++)
		{
		x=q[i].l,y=q[i].r;
		while(cl<x)
			{
			cs-=a[cl];
			cl++;
			}
		while(cl>x)
			{
			cs+=a[cl-1];
			cl--;
			}
		while(cr<y)
			{
			cs+=a[cr+1];
			cr++;
			}
		while(cr>y)
			{
			cs-=a[cr];
			cr--;
			}
		arr[q[i].pos]=cs;
		}
	for(i=0;i<m;i++)
		cout<<arr[i]<<endl;
	}
		
		
	
