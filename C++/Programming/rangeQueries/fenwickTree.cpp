/*
input
12
2 1 1 3 2 3 4 5 6 7 8 9
Enter the 1-index position
6
Enter the index and UpdateValue
3 -6

output
12
6
*/

#include<bits/stdc++.h>
using namespace std;
int n;
int sum(int *ft,int i)
	{
	int sum=0;
	while(i>0)
		{
		sum+=ft[i];
		i-=i&(-i);
		}
	return sum;
	}

void update(int *ft,int *a,int i,int v)
	{
	int index;
	index=i+1;
	while(index<=n)
		{
		ft[index]+=v;
		index+=index&(-index);
		}
	}
		

	
int main()
	{
	int i,pos,val; 
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	int ft[n+1]={};
	for(i=0;i<n;i++)
		update(ft,a,i,a[i]);
	cout<<"Enter the 1-index position"<<endl;
	cin>>pos;
	cout<<sum(ft,pos)<<endl;
	cout<<"Enter the index and UpdateValue"<<endl;
	cin>>i>>val;
	i-=1;
	update(ft,a,i,val);
	cout<<sum(ft,pos)<<endl;
	}
		
