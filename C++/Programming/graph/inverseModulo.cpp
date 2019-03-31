#include<iostream>
using namespace std;
long long modInverse(long long x, unsigned long long y, unsigned long long m)
{
    if (y == 0)
        return 1;
    long long p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
  

int main()
{
    long long a = 2, m = 1000000007;
    modInverse(a, m-2,m);
    return 0;
}
