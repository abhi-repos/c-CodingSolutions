
#include<iostream>
#include<string.h>
using namespace std;
 
two integers
int max(int a, int b)
{   return (a > b)? a : b; }
 

int LCSubStr(char *X, char *Y, int m, int n)
{
    int LCSuff[m+1][n+1];
    int result = 0;  
 

    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;
 
            else if (X[i-1] == Y[j-1])
            {
                LCSuff[i][j] = LCSuff[i-1][j-1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else LCSuff[i][j] = 0;
        }
    }
    return result;
}
 
int main()
{
    char X[] = "hackeratrekcah";
    char Y[] = "hackertarekcah";
 
    int m = strlen(X);
    int n = strlen(Y);
 
    cout << "Length of Longest Common Substring is "
         << LCSubStr(X, Y, m, n);
    return 0;
}