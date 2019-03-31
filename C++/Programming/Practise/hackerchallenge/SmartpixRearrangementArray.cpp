/*http://codingloverlavi.blogspot.in/2016/08/string-formatting-question-smartprix.html
https://www.glassdoor.com/Interview/1st-question-210-points-Write-a-program-to-simulate-a-keyboard-with-given-keys-and-their-operation-You-need-to-print-t-QTN_2195082.htm
https://www.glassdoor.co.in/Interview/Given-a-program-compile-it-and-print-its-output-to-STDOUT-The-given-language-has-8-types-of-statements-1-ECHO-1-pri-QTN_2214116.htm*/
#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int i;
	string str1,str2;
	vector <string> v1,v2;
	getline(cin,str1);
	getline(cin,str2);
	istringstream is1(str1);
	istringstream is2(str2);
  	string s;
  	while (getline( is1, s, ' ' )) 
		v1.push_back(s);
	while (getline( is2, s, ' ' )) 
		v2.push_back(s);

	count=0;
	for(i=0;i<v2.size;i++)
		{
		string nw;
		s=v2[i];
		len=s.length();
		for(i=0;i<(len-1);i++)
			{
			if(s[i]=='%'&&s[i+1]=='s')
				{
				if(s[i+2]=='[')
					index=s[i+3]-'0';
				else
					{
					index=count;
					count++;
					}
				if(s[i+5]==':')
					{
					l=s[i+6]-'0';
					mn=(v1[index].size(),l);
					}
				else
					mn=v1[index].size();
				temp=v1[index];
				for(i=0;i<mn;i++)
					nw=nw+temp[i];		

				}
			nw=nw+s[i];
			}
	
  		
	}
	
