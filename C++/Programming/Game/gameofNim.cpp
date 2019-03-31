#include<bits/stdc++.h>
using namespace std;
int grundy(set <int> s)
	{
	int i=0;
	while(s.find(i)!=s.end())
		i++;
	return i;
	}

int main()
	{
	int n,i,j,pos;
	cin>>n;
	int p[3]={1,3,4},game[n];
	for(i=0;i<n;i++)
		{
		set <int> s;
		for(j=0;j<3;j++)
			{
			pos=i-p[j];
			if(pos>=0)
				s.insert(game[pos]);
			}
		game[i]=grundy(s);
		}

	for(i=0;i<n;i++)
		cout<<game[i]<<" ";
	cout<<endl;
	}	
	

