/*
Given sentence. Output will be words in the sentence sorted by number of distint character occurance in the word, followed by length of the word  

Input :
Bananas do not grow in Mississippi
Output :
do in not Mississippi Bananas grow

*/


#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<pair<string,int>,string> &a,const pair<pair<string,int>,string> &b) 
{ 
    if(a.first.second==b.first.second)
	return a.first.first.length() > b.first.first.length(); 
    return (a.first.second < b.first.second); 
} 
void getSortedString(string str) 
{ 
   int cnt[26]={},i,count,len; 
   vector <pair<pair<string,int>,string>> v;
   vector <pair<pair<string,int>,string>> :: iterator it; 
   istringstream ss(str);
   do {
	string token,word="";
	char ch;
	ss >> token; 
	len=token.length();
	count=0;
	for(i=0;i<len;i++)
		{
		ch = token[i];
		word.push_back(tolower(ch));
		}
	for(i=0;i<len;i++)
		{
		if(cnt[word[i]-'a']==0)
			count++;
		cnt[word[i]-'a']++;
		}
	v.push_back({{word,count},token});
	for(i=0;i<26;i++)
	    cnt[i]=0; 	  
  	} while (ss); 		
   sort(v.begin(), v.end(), sortbysec); 
   for(it=v.begin();it!=v.end();it++)
	cout<<(*it).second<<" ";
} 
  
int main()
	{
	string str;
	getline(cin, str);
	getSortedString(str);
	}
