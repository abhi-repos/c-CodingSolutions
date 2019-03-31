#include<bits/stdc++.h>
using namespace std;
int k,mn=1000000000;

void combinationUtil(int arr[], int data[], int start, int end,
                     int index, int r)
{
    int sum,count,i;
    if (index == r)
    {
	sum=data[0],count=1;
	for(i=1;i<r;i++)
			{
			sum+=((data[i]-data[i-1])*(count*k));
			count++;
			}
	mn=min(mn,sum);
        return;
    }
 
   
    for (int i=start; i<=end && end-i+1 >= r-index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i+1, end, index+1, r);
    }
}

void printCombination(int arr[], int n, int r)
{
    int data[r];
    combinationUtil(arr, data, 0, n-1, 0, r);
}


int main()
	{
	int n,m,l,i,temp,sum,count;
	vector <int> v;
	cin>>n>>m>>k;
	for(i=0;i<n;i++)
		{
		cin>>temp;
		if(temp==1)
			v.push_back(i);
		}
	l=v.size();
	int a[l];
	for(i=0;i<l;i++)
		a[i]=v[i];
	if(l==m)
		{
		sum=v[0],count=1;
		for(i=1;i<l;i++)
			{
			sum+=((v[i]-v[i-1])*(count*k));
			count++;
			}
		cout<<sum<<endl;
		}
	else if(l<m)
		cout<<"-1"<<endl;
	else
		{
		printCombination(a, l, m);
		cout<<mn<<endl;
		}
	}
