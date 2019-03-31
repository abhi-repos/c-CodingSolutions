#include<bits/stdc++.h>
using namespace std;
int x[]={-1,0,1,0},y[]={0,1,0,-1},n,m;
bool isValid(int row, int col)
{
  return (row >= 0) && (row < n) && (col >= 0) && (col < m);
}
int main()
	{
	int i,j,nx,ny,c1=0,c2=0,count=-1,c3=0,c4=0;
	cin>>n>>m;
	int a[n][m];
	queue <pair<int,int>> q; 
	for(i=0;i<n;i++)
		{
		for(j=0;j<m;j++)
			{
			cin>>a[i][j];
			if(a[i][j]==2)
				{
				q.push({i,j});
				c1++;
				}
			else if(a[i][j]==1)
				c3++;
			}
		}
	while(!q.empty())
		{
		if(c2==0)
			{
			c2=c1;
			c1=0;
			count++;
			}
		c2--;
		pair<int , int> u =  q.front();
		q.pop();
		for(i=0;i<4;i++)
			{
			nx=u.first+x[i];
			ny=u.second+y[i];
			if(isValid(nx,ny)&&a[nx][ny]==1)
				{
				a[nx][ny]=2;
				q.push({nx,ny});
				c1++;
				c4++;
				}
			}
		}
	if(c3==c4)
		cout<<count<<endl;
	else
		cout<<"-1"<<endl;
	}
