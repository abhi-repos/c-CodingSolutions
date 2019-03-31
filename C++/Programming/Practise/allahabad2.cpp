#include<bits/stdc++.h>
using namespace std;
 

int countIntegralSolutions(long long int n)
{

    long long int result = 0,i,j,k;
 

    for (i=0; i<=n; i++)
      for (j=0; j<=n-i; j++)
          for (k=0; k<=(n-i-j); k++)
             if ((i + j + k == n)&&((i&j&k)>0))
			{
              		result++;
			result%=1000000007;
			}
 
    return result;
}
 
// Driver code
int main()
{
    long long int n,t;
	cin>>t;
	while(t--)
		{
		cin>>n;
    cout <<  countIntegralSolutions(n)<<endl;
		}
    return 0;
}
