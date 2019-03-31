#include<bits/stdc++.h>
using namespace std;


int solve(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return max(i,solve(parent, parent[i]));
}
 
int find(int parent[], int i)
{
    if (parent[i] == -1)
        return i;
    return find(parent, parent[i]);
}
void Union(int parent[], int x, int y)
{
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

int main()
	{
	int n,m,i,x,y,v,u,q; 
	cin>>n>>m;
	int parent[n+1];
	for(i=0;i<=n;i++)
		parent[i]=-1;
	while(m--)
		{
		cin>>u>>v;
		Union(parent, u, v);
		}
	cin>>q;
	while(q--)
		{
		cin>>u>>v;
		x = solve(parent,u);
        	y = solve(parent,v);
 
        	if (x == y)
            		cout<<"TIE"<<endl;
		else 
			{
			if(x>y)
				cout<<u;
			else
				cout<<v;
			cout<<endl;
			}
		}
	}	
