// C recursive function to
// solve tower of hanoi puzzle
#include <stdio.h>
void towerOfHanoi(int n, char src, char helper, char dest)
{
    // base case
    if (n == 0)
    {
        return;
    }
    // recursive case
    towerOfHanoi(n - 1, src, dest, helper);
    printf("\n Move disk %d from rod %c to rod %c", n, src, dest);
    towerOfHanoi(n - 1, helper, src, dest);
}

// Driver code
int main()
{
    int n = 3;                      // Number of disks
    towerOfHanoi(n, 'A', 'B', 'C'); // A, B and C are names of rods
    return 0;
}
