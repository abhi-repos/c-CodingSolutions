#include<bits/stdc++.h>
using namespace std;
int xa[]={-1,0,1,0},ya[]={0,1,0,-1},ROW,COL; 
bool isValid(int row, int col)
{
  return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL);
}

int main()	
	{
	int total,i,j,xs,ys,xd,yd,nx,ny,src,dst,path;
	cout<<"Enter the Dimension of Matrix"<<endl;
	cin>>ROW>>COL;
	total=ROW*COL;
	int a[ROW][COL],visited[ROW][COL]={},parent[total];
	cout<<"Enter the values 1:Path 0:Obstacle"<<endl;
	for(i=0;i<ROW;i++)
		for(j=0;j<COL;j++)
			cin>>a[i][j];
	cout<<"Enter the source index"<<endl;
	cin>>xs>>ys;
	cout<<"Enter the destination index"<<endl;
	cin>>xd>>yd;
	queue <pair<int,int>> q;
	q.push({xs,ys});
	visited[xs][ys]=1;
	while(!q.empty())
		{
		pair<int , int> u =  q.front();
		q.pop();
		for(i=0;i<4;i++)
			{
			nx=u.first+xa[i];
			ny=u.second+ya[i];
			if(isValid(nx,ny)&&a[nx][ny]==1)
				{
				if(visited[nx][ny]==false)
					{
					visited[nx][ny]=true;
					q.push({nx,ny});
					parent[nx*COL+ny]=u.first*COL+u.second;
					if(nx==xd&&ny==yd)
						{
						src=xs*COL+ys;
						dst=xd*COL+yd;
						cout<<"Path from SOURCE to DESTINATION"<<endl;
						for(i=dst;i!=src;i=parent[i])
							{
							cout<<"x:"<<i/COL<<" ";
							cout<<"y:"<<i%COL<<endl;
							}
						path=1;
						break;
						}
					}
				}
			if(path==1)
				break;
			}
		
		}
		if(path==0)
			cout<<"Sorry there is no path"<<endl;

			
	}
			
