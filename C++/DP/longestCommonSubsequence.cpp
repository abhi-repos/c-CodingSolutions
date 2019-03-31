#include<bits/stdc++.h>
using namespace std;
int lcs(string str1,string str2,int i,int j)
	{
	//BASE CONDITION
	if(i==0||j==0)
		return 0;
	//IF MATCH
	if(str1[i-1]==str2[j-1])
		return 1+lcs(str1,str2,i-1,j-1);
	//ELSE
	return max(lcs(str1,str2,i-1,j),lcs(str1,str2,i,j-1));
	}		
int main()
	{
	int len1,len2;
	string str1,str2;
	cin>>str1>>str2;
	len1=str1.length();
	len2=str2.length();
	cout<<lcs(str1,str2,len1,len2)<<endl;
	}
