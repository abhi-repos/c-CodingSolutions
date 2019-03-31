#include<bits/stdc++.h>
using namespace std;
int main()
	{
	long long int l,count,total=0,start,end,i,count;
	char flag;
	string sntnce;
	cin>>sntnce;
	l=sntnce.length();
	count=1;
	for(i=1;i<l;i++)
		{
		if(sntnce[i]==sntnce[i-1])
			count++;
		else
			{
			total+=((count*(count+1))/2);
			start=i-1;
			end=i+1;
			count=0;
			while(sntnce[start]==sntnce[end])
				{
				if(count==0)
					flag=sntnce[start];


				if(sntnce[start]==flag)
					count++;
				else
					break;


				start--;
				end++;
				if(start==0||end==(l-1))
					break;
				
				}
		
			total+=count;
			count=1;
			}
		
		}
        total+=(count*(count+1))/2;
	cout<<total<<endl;
	}		



