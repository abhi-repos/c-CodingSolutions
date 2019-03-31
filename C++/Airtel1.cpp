#include<bits/stdc++.h>
using namespace std;
int countoe(int *arr, int n)
{
    unordered_map <int, int> um;
    int curr_sum = 0;
    for (int i = 0; i < n; i++) {
        curr_sum += (arr[i] == 0) ? -1 : arr[i];
        um[curr_sum]++;
    }
    int count = 0;
    for (auto itr = um.begin(); itr != um.end(); itr++) {
 
         if (itr->second > 1)
            count += ((itr->second * (itr->second - 1)) / 2);
    }
 
    if (um.find(0) != um.end())
        count += um[0];
    return count;
}
int main()
	{
	int n,i,x;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		{
		cin>>x;
		if(x%2==0)
			a[i]=0;
		else
			a[i]=1;
		}
	cout<<countoe(a,n)<<endl;
	}
	
