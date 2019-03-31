#include<bits/stdc++.h>
using namespace std;
map <int,int> f;
set <int> s;
void fib()
{
  
  int i,temp;
  f[0]=0;   f[1]=1;
  s.insert(0);
  s.insert(1);
  for (i = 2; i <= 50; i++)
	{
      f[i] = f[i-1] + f[i-2];
	s.insert(f[i]);
	}
 
 
}

int divSum(int num,int m)
{ 
    long long int result = 0;

    for (int i=2; i<=sqrt(num); i++)
    {
       
        if (num%i==0)
        {
          
            if (i==(num/i))
                result += i;
            else
                result += (i + num/i);
	    result%=m;
        }
    }
 
    return (result + 1);
}
int printDivisors(int n)
{
	int count=0,i;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
                 if (n/i == i)
                	count+=1;
 
            else // Otherwise print both
			count+=2;                	
	}
    }
	return count-1;
}

int main()
{
    fib();
	int t,i,n,m,res,num;
	cin>>t;
	for(i=1;i<=t;i++)
		{
		cin>>n>>m;
		res=divSum(n,m);
		cout<<res<<" ";
		num=printDivisors(res);
		cout<<num<<" ";
		if(s.find(num)!=s.end())
			cout<<"Case #"<<i<<" : YES."<<endl;
		else
			cout<<"Case #"<<i<<" : NO."<<endl;
		}
}


