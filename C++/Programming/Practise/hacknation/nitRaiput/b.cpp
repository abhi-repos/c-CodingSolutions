#include<bits/stdc++.h>
#include<string>
using namespace std;
bool prime[100000];
int myCompare(string X, string Y)
{
    
    string XY = X.append(Y);
 
    string YX = Y.append(X);
 
    
    return XY.compare(YX) > 0 ? 1: 0;
}
 

void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);
 
    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}

void SieveOfEratosthenes()
{
   
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=100000; p++)
    {
        
        if (prime[p] == true)
        {
         
            for (int i=p*2; i<=100000; i += p)
                prime[i] = false;
        }
    }
 
    
}
int main()
	{
	SieveOfEratosthenes();
	int t,n,i,temp,count=0,num,v=0;
	string str;
	cin>>t;
	while(t--)
		{
		count=0;
		vector<string> arr;
		cin>>n;
		for(i=0;i<n;i++)
			{
			cin>>temp;
			if(prime[temp]==false)
				{
				count++;
				str=to_string(temp);
				arr.push_back(str);
				}
			}

		
		if(count==0)
			cout<<"No Secret Code!";
		else
			printLargest(arr);
		cout<<endl;
		}
	}
		
