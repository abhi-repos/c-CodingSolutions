#include <iostream>
#include <string.h>
using namespace std;
int M,N;
bool bpGraph[1000][1000];
bool bpm(int u, bool seen[], int matchR[])
{
    for (int v = 0; v < N; v++)
    {
       if ( bpGraph[u][v] && !seen[v])
        {
            seen[v] = true; 
            if (matchR[v] < 0 || bpm(matchR[v], seen, matchR))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 

int maxBPM()
{

    int matchR[N];
    memset(matchR, -1, sizeof(matchR));
 
    int result = 0;
    for (int u = 0; u < M; u++)
    {
     
        bool seen[N];
        memset(seen, 0, sizeof(seen));
 
        if (bpm(u, seen, matchR))
            result++;
    }
    return result;
}
 

int main()
{

	int t,n,k,countt,countp,i,j,sum,mn,x,val,nx,g,q;
	char c;
	cin>>t;
	while(t--)
		{
		sum=0;
		cin>>n>>k;
		for(i=0;i<n;i++)
			{
			countp=0,countt=0;
			int a[n];
			for(j=0;j<n;j++)
				{
				cin>>c;
				if(c=='P')
					{
					a[j]=1;
					countp++;
					}
				else
					{
					a[j]=0;
					countt++;
					}
				}
			if(k>=n)
				{
				mn=min(countt,countp);
				sum+=mn;
				}
			else
				{
			
				for(g=0;g<countp;g++)
					for(q=0;q<n;q++)
						bpGraph[g][q]=0;
				val=0;
				for(j=0;j<n;j++)
					{
					if(a[j]==1)
						{
						x=1;
						while(x<=k)
							{
							nx=j+x;
							if(nx<n)
								{
								if(a[nx]==0)
									bpGraph[val][nx]=1;
								}
								else
									break;
								x++;
							}
						x=1;
						while(x<=k)
							{
							nx=j-x;
							if(nx>=0)
								{
								if(a[nx]==0)
									bpGraph[val][nx]=1;
								}
							else
								break;
							x++;
							}
						val++;
				
						}
					}
					M=countp,N=n;
					sum+=maxBPM();

				}
			}
		cout<<sum<<endl;	
		}
	}			
				
