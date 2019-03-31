#include <bits/stdc++.h>
using namespace std;

int lps(string str,int n)
{

    int L[n][n];
    for (int i = 0; i < n; i++)
        L[i][i] = 1;
    for (int cl=2; cl<=n; cl++)
    {
        for (int i=0; i<n-cl+1; i++)
        {
            int j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
                L[i][j] = 2;
            else if (str[i] == str[j])
                L[i][j] = L[i+1][j-1] + 2;
            else
                L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
    return L[0][n-1];
}
 
int main()
	{
	int n,p,q,len,op,cst;
	string str;
	cin>>n;
	cin>>str;
	cin>>p>>q;
	len=lps(str,n);
	op=n-len;
	cst=op*q;
	if(cst>p)
		cout<<"NO"<<endl;
	else
		cout<<"YES"<<endl;	
	}
