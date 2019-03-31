/*
Input Sample
4 5
YNNYN
YYYNN
NNNYY
NNNYN
*/
#include<bits/stdc++.h>
using namespace std;
int dx[]={0,1,-1,0},dy[]={1,0,0,-1},n,m,a[1000][1000],fact[100000];
bool visited[1000][1000];
void  bfs(int i,int j)
	{
	int x,y,k;
	visited[i][j]=true;
	queue <int> qx,qy;
	qx.push(i),qy.push(j);
	while(!qx.empty())
		{
		x=qx.front(),y=qy.front();
		qx.pop(),qy.pop();
		for(k=0;k<4;k++)
			{
			i=x+dx[k];
			j=y+dy[k];			
			if(i<n&&j<m)
				{
				if(visited[i][j]==false&&a[i][j]==1)
					{
					qx.push(i);
					qy.push(j);
					visited[i][j]=true;
					}
				}
			}
		}
	}

int modInverse(int x)
	{
	int y,result=1;
	y=p-2;
	while(y>0)
		{
		if(y%2!=0)
			result*=x;
		y=y>>1;
		result*=(x*x);
		}
	return result;

	}
int main()
	{	
	int i,j,count;
	string str;
	cin>>n>>m;
	for(i=0;i<n;i++)
		{
		cin>>str;
		for(j=0;j<m;j++)
			{
			if(str[j]=='Y')
				a[i][j]=1;
			else
				a[i][j]=0;
			visited[i][j]=false;
			}
		}
	count=0;
	for(i=0;i<n;i++)
		{
		for(j=0;j<m;j++)
			{
			if(visited[i][j]==false&&a[i][j]==1)
				{
				bfs(i,j);
				count++;
				}
			}
		}
	fact[0]=0;
	for(i=1;i<=count;i++)
		fact[i]=fact[i-1]*i%p;
	for(i=0;i<=count;i+=2)
		{
		value=fact[count]*modInverse(count-i)*modInverse(i);
		result+=value;
		result%=p;
		}	
	cout<<result<<endl;				
	}
