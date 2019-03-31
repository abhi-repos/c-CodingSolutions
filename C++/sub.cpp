#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int x,y,brw;
	cin>>x>>y;
	while(y!=0)
		{
		x=x^y;
		brw=(~x)&y;
		y=brw*2;
		}
	cout<<x<<endl;
	}
	
