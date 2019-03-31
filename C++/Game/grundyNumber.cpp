    #include<bits/stdc++.h>
    using namespace std;
    int grundy[4][3]={{0,1,2},{1,0,3},{2,3,0},{3,2,1}};	
    int main()
    	{
    	int t,n,m,i,j;
    	cin>>t;
    	while(t--)
    		{
    		cin>>n>>m;
		n-=1;
		m-=1;
		if(grundy[n%4][m%3]==0)
    			cout<<"Vanya";
    		else
    			cout<<"Tuzik";
    		cout<<endl;
    		}
    	}	
    	
     
 
 
