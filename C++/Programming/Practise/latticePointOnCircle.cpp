// C++ program to find countLattice points on a circle
#include<bits/stdc++.h>
using namespace std;
 
// Function to count Lattice points on a circle
int countLattice(int r)
{
    if (r <= 0)
        return 0; 
 
    // Initialize result as 4 for (r, 0), (-r. 0),
    // (0, r) and (0, -r)
    int result = 4;
 
    // Check every value that can be potential x
    for (int x=1; x<r; x++)
    {
        // Find a potential y
        int ySquare = r*r - x*x;
        int y = sqrt(ySquare);
 
        // checking whether square root is an integer
        // or not. Count increments by 4 for four 
        // different quadrant values
        if (y*y == ySquare)
            result += 4;
    }
 
    return result;
}
 
// Driver program
int main()
{
    int r = 5;
    cout << countLattice(r);
    return 0;
}
