#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 2, 30, 3, 5, 1, 39};
    int small = v[0];
    int secSmall = INT_MAX;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] < small)
        {
            secSmall = small;
            small = v[i];
        }
        else if (v[i] != small && v[i] < secSmall)
        {
            secSmall = v[i];
        }
    }

    cout << "Smallest in array is : " << small << " second smallest is : " << secSmall;
}