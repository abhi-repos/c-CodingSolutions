#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int a,b,c,d,count=0,arr[100000][2],n,m=2,t=1,id,frqn,prc,i,migration=0;
	double temp;
	multimap <int,pair<int,int>> mp;
	multimap <int,pair<int,int>> :: iterator it;
	ifstream infile("Set_1_Input_m_2.txt");	
	while (infile >> a >> b >> c)
		{
		arr[count][0]=b,arr[count][1]=c;
		temp=(double)(1*c)/b;
		d=ceil(temp)-1;
		mp.insert({d,{count,1}});
		count++;
		}
	int update[m][3];
	while(t<=20000)
		{
		prc=0;
		for(it=mp.begin();it!=mp.end();it++)
			{
			id=(*it).second.first;
			frqn=(*it).second.second;			
			if(frqn<=arr[id][0]||t%arr[id][1]==0)
				{
				if(frqn==arr[id][0]+1)
					frqn=1;
				else
					frqn++;	
				temp=(double)(frqn*arr[id][1])/arr[id][0];
				d=ceil(temp)-1;
				if(update[prc][1]!=id)
					migration++;
				update[prc][0]=d,update[prc][1]=id,update[prc][2]=frqn;
				prc++;
				mp.erase(it);
				}
			if(prc==m)
				break;	
			}
		for(i=0;i<m;i++)
			mp.insert({update[i][0],{update[i][1],update[i][2]}});		
		t++;
		}
	cout<<"Migrations are="<<migration<<endl;
	}

