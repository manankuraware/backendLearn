#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    // There are no primes strictly less than 2
    if (n <= 2)
        return 0;

    // Maintain a vector of size n+1, mark all index as 1
    vector<int> arr(n + 1, 1);

    // 0 and 1 are not prime, so assign them 0
    arr[0] = 0;
    arr[1] = 0;

    // Traverse from 2 up to the square root of n
    for (int i = 2; i * i < n; i++)
    {
        // If the index is marked as 1, it is a prime
        if (arr[i] == 1)
        {
            // Mark all multiples of i as 0 (not prime)
            for (int k = i * i; k < n; k += i)
            {
                arr[k] = 0;
            }
        }
    }

    // Count all the indices that are still marked as 1
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
    }

    cout << count;
}