#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int t;
	cin>>t;
	cin>>n>>x;
	int a[x][2];
	for ( i = 0; i < n; i++ )
      		mcl[i] = 1;
	for(i=0;i<m;i++)
		{
		cin>>u>>v>>w;
		f=v+w;
		a[i][0]=v,a[i][1]=f;
		}
	for ( i = 1; i < n; i++ )
      		for ( j = 0; j < i; j++ )
         		if ( arr[i].a > arr[j].b && mcl[i] < mcl[j] + 1)
            			mcl[i] = mcl[j] + 1;
