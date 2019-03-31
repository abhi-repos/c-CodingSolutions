#include<bits/stdc++.h>
using namespace std;
#define d 256
vector <int> v;
void search(string pat, string txt, int q)
{
    int m,n,i,j,p,t,h;
    m=pat.length();
    n=txt.length();

    p = 0,t = 0,h = 1;
    for (i = 0; i < m-1; i++)
        h = (h*d)%q;
 
    
    for (i = 0; i < m; i++)
    {
        p = (d*p + pat[i])%q;
        t = (d*t + txt[i])%q;
    }
 
    for (i = 0; i <= n - m; i++)
    {

        if ( p == t )
        {
           for (j = 0; j < m; j++)
            {
                if (txt[i+j] != pat[j])
                    break;
            }
 
            if (j == m)
                v.push_back(i);

        }
 
     
        if ( i < n-m )
        {
            t = (d*(t - txt[i]*h) + txt[i+m])%q;
 
     
            if (t < 0)
            t = (t + q);
        }
    }
}
 
int main()
{
	int t,q=101,n,i,val,sum=0;
	string pat,txt;
	cin>>t;
	while(t--)
		{
		sum=0;
		cin>>txt>>pat;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
			cin>>a[i];
		v.clear();
		search(pat,txt,q);	   
 		for(i=0;i<v.size();i++)
			{
			val=v[i];
			sum+=a[val];
			}
		return sum;
		}
			
		

  
 }
