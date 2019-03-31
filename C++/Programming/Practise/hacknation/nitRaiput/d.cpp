#include <bits/stdc++.h>
using namespace std;
unordered_map<long long,long long> parent;
long long sumOfDigit(long long K) 
{

    long long sod = 0;
    while (K)
    {
        sod += K % 10;
        K /= 10;
    }
    return sod;
}
 

long long totalNumbersWithSpecificDifference(long long N, long long diff)
{
    long long low = 1, high = N,key;
 
  
    while (low <= high) 
    {
        long long mid = (low + high) / 2;
	 if (parent.find(mid) == parent.end())
        	key=sumOfDigit(mid);
	else
		key=parent[mid];
		
		
        if (mid - key < diff)        
            low = mid + 1;
    
        else       
            high = mid - 1;        
    }
 
   
    return (N - high);
}
 
int main()
	{
	long long t,n,m;
	cin>>t;
	while(t--)
		{
		cin>>n>>m;
		cout<<totalNumbersWithSpecificDifference(n, m)<<endl;
		}

	}
