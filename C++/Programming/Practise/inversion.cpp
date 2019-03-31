#include<bits/stdc++.h>
using namespace std;
int gcdExtended(int a, int b, int *x, int *y)
{
    
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    int x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1);
 
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

int modInverse(int a, int m)
{
    int x, y,res;
    int v=gcdExtended(a, m, &x, &y);
    res = (x%m + m) % m; 
    return res;
}

int main()
	{
	int n,i,temp,total,val,attack,num;
	long long res;
	map <int,int> m;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>temp;
	total=0,val=0;
	for(i=1;i<=n;i++)
		{
		attack=((i-1)*i)/2;
		num=n-i+1;
		total+=num;
		val+=(num*attack);
		}
	res=val*modInverse(total,1000000007);
	res%=1000000007;
	cout<<res<<endl;
	}
