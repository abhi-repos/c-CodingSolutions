#include<bits/stdc++.h>
using namespace std;
int N;
int g[1001][1001]={},dx[]={-2,-1},dy[]={-1,-2};
int mex(set <int> s)
	{
	int index=0;
	while(s.find(index)!=s.end())
		index++;
	return index;
	}

void grundy()
    {
	int i,j,k,nx,ny;
        for(i=0;i<=1000;i++)
            {
                    for(j=0;j<=1000;j++)
                            {
		
                                set <int> s;
                                for(k=0;k<2;k++)
                                        {
                                            nx=i+dx[k],ny=j+dy[k];
                                            if(nx>=0&&ny>=0)
						s.insert(g[nx][ny]);
			
			                                               
                                        }
                                g[i][j]=mex(s);
                            }
            }
	
    }

string solve (vector<vector<int> > A) {
    int i,j,x;
    x=0;
    for(i=0;i<N;i++)
        {
        for(j=0;j<N;j++)
            {
            if(A[i][j]%2!=0)
                x^=g[i][j];
            }
            
        }
    if(x!=0)
        return "ALICE";
    else
        return "BOB";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    grundy();
    int T;
    cin >> T;
    for(int t_i=0; t_i<T; t_i++)
    {
        
        cin >> N;
        vector<vector<int> > A(N, vector<int>(N));
        for (int i_A=0; i_A<N; i_A++)
        {
        	for(int j_A=0; j_A<N; j_A++)
        	{
        		cin >> A[i_A][j_A];
        	}
        }

        string out_;
        out_ = solve(A);
        cout << out_;
        cout << "\n";
    }
}
