#include<bits/stdc++.h>
using namespace std;
stack <int> s1,s2;
void enque(int num)
	{
	s1.push(num);
	}
bool del()
	{
	if(s2.empty())
		{
		if(s1.empty())
			return false;
		else
			{
			while(!s1.empty())
				{
				s2.push(s1.top());
				s1.pop();
				}
			cout<<s2.top()<<endl;
			s2.pop();
			return true;
			}
		}
	else
		{
		cout<<s2.top()<<endl;
		s2.pop();
		return true;
		}

	}
int main()
	{
	int n,i,x,y;
	cin>>n;
	while(n--)
		{
		cin>>x;
		if(x==1)
			{
			cin>>y;
			enque(y);
			}
		else
			{
			if(!del())
				cout<<"Error"<<endl;
			}
		}
	}	
	
