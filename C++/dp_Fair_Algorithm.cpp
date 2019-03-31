#include<bits/stdc++.h>
using namespace std;
int main()
	{
	ifstream infile("Set_1_Input_m_2.txt");
	int a,b,c,m=2,count=0,t=0,current,i,j,arr[100000][2],parent[100000][2],share,mn,temp,val1,val2,counter=0,migrations=0;
	while (infile >> a >> b >> c)	
		{
		arr[count][0]=b,arr[count][1]=c;
		parent[count][0]=b,parent[count][1]=c;
		count++;
		}
	int shr[count];
	while(t<=20000)
		{
		mn=1e9;
		for(i=0;i<count;i++)
			mn=min(mn,arr[i][1]);
		t+=mn;
		for(i=0;i<count;i++)
			shr[i]=mn*((double)arr[i][0]/arr[i][1]);
		current=1,share=0;
		for(j=0;j<count;j++)
			{
			share+=shr[j];
			if(share<mn)
				continue;	
			else if(share>mn)
				{
				temp=share-shr[j];
				val1=mn-temp;
				val2=share-mn;
				current++;
				share=val2;
				migrations++;
				}
			else
				{
				current++;
				share=0;
				}
			}
		for(i=0;i<count;i++)
			{
			arr[i][0]-=shr[i];
			arr[i][1]-=mn;
			if(arr[i][1]==0)
				{
				arr[i][0]=parent[i][0];
				arr[i][1]=parent[i][1];
				}	
			}
		}
	cout<<"Migrations="<<migrations<<endl;
	}	

		
	
	
	
	
	
