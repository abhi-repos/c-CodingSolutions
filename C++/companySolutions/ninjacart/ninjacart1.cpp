#include<bits/stdc++.h>
using namespace std;
int main()
    {
        int t,counter,n,m,i,total,x,j,count,sum,p,w;
        cin>>t;
        while(t--)
            {
                counter=0;
                cin>>n;
                int going[n],coming[n+1][2]={};
                going[n-1]=0;
                cin>>p>>w;
                int pupil[n];
                m=n-1;
                for(i=0;i<m;i++)
                    cin>>pupil[i];
                pupil[m]=0;
                for(i=0;i<m;i++)
                    {
		    x=pupil[i];
                    int temp[x][2];
                    for(j=0;j<x;j++)
                        cin>>temp[j][0];
                    total=0;
                    for(j=0;j<x;j++)
                        {
                        cin>>temp[j][1];
                        total+=temp[j][1];
                        }
                    going[i]=total;
                    for(j=0;j<x;j++)
                        {
                        coming[temp[j][0]][0]++;
                        coming[temp[j][0]][1]+=temp[j][1];
                        }
                    }
                count=0,sum=0;
                for(i=0;i<=m;i++)
                    {
                    count+=pupil[i];
                    count-=coming[i+1][0];
                    sum+=going[i];
                    sum-=coming[i+1][1];
                    if((count>p)||(sum>w))
                        {
                        counter=i+1;
                        break;
                        }
                        
                    }
                if(counter==0)
                    counter=n;
		cout<<counter<<endl;
		
		               
            }
    }
