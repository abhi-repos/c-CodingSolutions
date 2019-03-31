#include<bits/stdc++.h>
using namespace std;
int edit(string str1,string str2,int i,int j)
	{
	if(i==0)
		return j;
	if(j==0)
		return i;
	if(str1[i-1]==str2[j-1])
		return edit(str1,str2,i-1,j-1);
	return 1+min(edit(str1,str2,i-1,j-1),min(edit(str1,str2,i,j-1),edit(str1,str2,i-1,j)));
	}

int main()
	{
	int n,m;
	string str1,str2;
	cin>>str1>>str2;
	n=str1.length();
	m=str2.length();
	cout<<edit(str1,str2,n,m)<<endl;
	}
