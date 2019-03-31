#include<bits/stdc++.h>
using namespace std;
int main()
	{	
        int x,y,carry;
	cin>>x>>y;
	while (y != 0)
    		{ 
 	        x = x^y; 
		carry = x&y;    
        	y = carry*2;
  		}
	cout<<x<<endl;
	}
