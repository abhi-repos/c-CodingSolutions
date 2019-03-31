#include<bits/stdc++.h>
using namespace std;
struct Task{
	 int deadline;
	 int id;
	 int frequency;
	 };
bool compareTwoTasks(Task a, Task b)
	{
	    if (a.deadline != b.deadline )
		return a.deadline > b.deadline;
	 
	    return (a.id > b.id);
	}
int main()
	{
	int a,b,c,d,count=0,arr[100000][2],n,m=2,t=1,tid,frqn,prc,i,migration=0;
	double temp;
	Task mp[100000];
	ifstream infile("Set_1_Input_m_2.txt");	
	while (infile >> a >> b >> c)
		{
		arr[count][0]=b,arr[count][1]=c;
		temp=(double)(1*c)/b;
		d=ceil(temp)-1;
		mp[count].deadline=d;
		mp[count].id=count;
		mp[count].frequency=1;
		count++;
		}
	sort(mp,mp+count,compareTwoTasks);
	int update[count]; 
	
	while(t<=20000)
		{
		prc=0;
		for(i=0;i<count;i++)
			{
			tid=mp[i].id;
			frqn=mp[i].frequency;			
			if(frqn<=arr[tid][0]||t%arr[tid][1]==0)
				{
				if(frqn==arr[tid][0]+1)
					frqn=1;
				else
					frqn++;	
				temp=(double)(frqn*arr[tid][1])/arr[tid][0];
				d=ceil(temp)-1;
				mp[i].deadline=d;
				mp[i].frequency=frqn;
				if(update[prc]!=tid)
					migration++;
				update[prc]=tid;
				prc++;
				}
			if(prc==m)
				break;	
			}
		sort(mp,mp+count,compareTwoTasks);
		t++;
		}
	cout<<"Migrations are="<<migration<<endl;
	}

