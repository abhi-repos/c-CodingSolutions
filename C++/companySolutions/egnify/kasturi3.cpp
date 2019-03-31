#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int a[3][3],i,s,j,result=0,flag,check,index;
	map <int,int> mp;
	map <int,int> :: reverse_iterator it;	
	for(i=0;i<3;i++)
		{
		s=0;
		for(j=0;j<3;j++)
			{
			cin>>a[i][j];
			s+=a[i][j];
			}
		mp.insert({s,i});
		}
	bool visited[3]={};					
	for(it=mp.rbegin();it!=mp.rend();it++)
		{
		index=(*it).second;
		visited[index]=true;
		flag=0,check=0;
		for(i=0;i<3;i++)
			{
			if(visited[i]==false)
				{
				for(j=0;j<3;j++)
					{
					if(a[index][j]>=a[i][j])
						{
						if(a[index][j]>a[i][j])
							flag=1;
						}
					else
						{
						check=1;
						}
					}

				
				}
			if(check==1)
				{
				result=1;
				break;
				}
			}
		if(result==1)
			break;
		}
	if(result==1)
		cout<<"no"<<endl;
	else
		cout<<"yes"<<endl;
	}
				
		
