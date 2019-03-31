#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t,n,i,j,temp,start,end;
	cin>>t;
	while(t--)
		{
		cin>>n;
		int a[n][n];
		for(i=0;i<n;i++)
			{
			for(j=0;j<n;j++)
				{
				cin>>temp;
				if(i==0&&j==0)
					start=temp;
				if(i==(n-1)&&j==(n-1))
					end=temp;
				if(i==j)
					a[i][j]=-1;
				else
					a[i][j]=temp;
				}
			}
		a[0][0]=start,a[n-1][n-1]=end;
				
		int tc[n+1][n+1];  
 
	     	tc[0][0] = a[0][0];
		for (i = 1; i < n; i++)
	        		tc[i][0] = tc[i-1][0] + a[i][0];
			
		for (j = 1; j < n; j++)
	        		tc[0][j] = tc[0][j-1] + a[0][j];
		for (i = 1; i < n; i++)
				{
			       for (j = i+1; j < n; j++)
					{
					if(tc[i][j-1]==-1)
						tc[i][j]=tc[i-1][j]+ a[i][j];
					else
        	    				tc[i][j] = min(tc[i][j-1], tc[i-1][j])+ a[i][j];
					}
				}
		for (i = 1; i < n; i++)
				{
			       for (j = 1; j < i; j++)
					{
					if(tc[i-1][j-1]==-1)
						tc[i][j]=tc[i][j-1]+ a[i][j];
					else
        	    				tc[i][j] = min(tc[i][j-1], tc[i-1][j])+ a[i][j];
					}
				}
		cout<<tc[n-2][n-1]+tc[n-1][n-2]+2*end<<endl;
	}	

 


		
				
	



