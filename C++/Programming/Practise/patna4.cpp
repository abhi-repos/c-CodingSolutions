#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,n,i,j,max=0;
	cin>>t;
	while(t--)
		{
		max=0;
		cin>>n;
		int arr[n],lis[n];
		for(i=0;i<n;i++)
			cin>>arr[i];
		 for (i = 0; i < n; i++ )
      			  lis[i] = 1;
		for (i = 1; i < n; i++ )
		        for (j = 0; j < i; j++ ) 
			           if ( arr[i] < arr[j] && lis[i] < lis[j] + 1)
                				lis[i] = lis[j] + 1;
			for (i = 0; i < n; i++ )
        			if (max < lis[i])
            				max = lis[i];
		cout<<max<<endl;
		}
	}

