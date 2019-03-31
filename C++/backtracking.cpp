//Counting number of ways to reach the Destination[n,n] from Source[1,1] when he can move only horizontally and vertically and accessing a particular position only once. 
#include <bits/stdc++.h>
using namespace std;
int n;
int arr [101][101];
int dirc [][2] = { {1 , 0}, {-1 , 0}, {0 , 1}, {0 , -1} };
int ans = 0;
bool vis [101][101];
void rec(int x, int y)
	{
    	if(x == n - 1 && y == n - 1)
		{ 
        	ans++;
        	return;
    		}	
	vis[x][y] = true;
	for(int i = 0; i < 4; i++)
		{
		int dx = x + dirc[i][0]; 
        	int dy = y + dirc[i][1];
        	if(dx < 0 || dx >= n || dy < 0 || dy >= n)
			 continue;
        	if(vis[dx][dy] || arr[dx][dy] == 1) 
			continue;
        	rec(dx, dy);
        	vis[dx][dy] = false;  
    		}
	}
int main()
	{

  	  cin >> n;

    	for(int i = 0; i < n; i++){
        	for(int j = 0; j < n; j++){
            		cin >> arr[i][j];
        	}
    	}
    	rec(0 , 0);
    	cout << ans << "\n";
    	return 0;
}
