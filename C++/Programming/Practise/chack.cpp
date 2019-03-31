#include<bits/stdc++.h>
using namespace std;
int print(int n)
	{
	if(n<0)
		return 0;
	cout<<print(n-2)<<" ";
	return n+2;
	}
int main()
	{
	int n;
	cin>>n;
	print(n);
	}
