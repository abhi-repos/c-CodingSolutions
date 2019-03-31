// g++ -std=c++14 map.cpp 

/*
    begin() – Returns an iterator to the first element in the multimap
    end() – Returns an iterator to the theoretical element that follows last element in the multimap
    size() – Returns the number of elements in the multimap
    max_size() – Returns the maximum number of elements that the multimap can hold
    empty() – Returns whether the multimap is empty
    pair<int,int> insert(keyvalue,multimapvalue) – Adds a new element to the multimap
    erase(iterator position) – Removes the element at the position pointed by the iterator
    erase(const g)– Removes the key value ‘g’ from the multimap
    clear() – Removes all the elements from the multimap
    key_comp() / value_comp() – Returns the object that determines how the elements in the multimap are ordered (‘<‘ by default)
    find(const g) – Returns an iterator to the element with key value ‘g’ in the multimap if found, else returns the iterator to end
    count(const g) – Returns the number of matches to element with key value ‘g’ in the multimap
    lower_bound(const g) – Returns an iterator to the first element that is equivalent to multimapped value with key value ‘g’ or definitely will not go before the element with key value ‘g’ in the multimap
    upper_bound(const g) – Returns an iterator to the first element that is equivalent to multimapped value with key value ‘g’ or definitely will go after the element with key value ‘g’ in the multimap

*/
#include<bits/stdc++.h>
using namespace std;
int main()
	{
	int n,u,v,w;
	multimap <int,pair<int,int>> m;
	multimap <int,pair<int,int>> :: iterator it;
	cin>>n;
	while(n--)
		{
		cin>>u>>v>>w;
		m.insert({w,{u,v}});
		}
	cout<<"THE SORTED MAP IS"<<endl; 
	for(it=m.begin();it!=m.end();it++)
		cout<<(*it).first<<" "<<(*it).second.first<<" "<<(*it).second.second<<endl;
	cout<<(m.lower_bound(25)).first<<endl;
	}
