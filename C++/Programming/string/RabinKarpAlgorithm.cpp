#include<bits/stdc++.h>
using namespace std;
int q=101;
int power(int n,int k)
	{
	int r=1;
	while(k>0)
		{
		if(k&1)
			r*=n;
		k=k>>1;
		n=(n*n)%q;
		}
	return r%q;
	}
	
int main()
	{
	int d=256,l1,l2,h,i,p=0,s=0;
	string str,s1,pat;
	cin>>str>>pat;
	l1=str.length();
	l2=pat.length();
	h=power(d,l2-1);
	for(i=0;i<l2;i++)
		{
		p=(p*d+pat[i])%q;
		s=(s*d+str[i])%q;
		}
		
	for(i=0;i<=(l1-l2);i++)
		{
		if(p==s)
			{
			s1=str.substr(i,l2);
			if(s1==pat)
				cout<<"Found at index ="<<i<<endl;
			}
		s=(d*(s-str[i]*h)+str[i+l2])%q;
		if(s<0)
			s+=q;
		}

	}
		
		
	
