#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 3, 3, 4, 5, 6};
    int i = 0;
    for (int j = 1; j < v.size(); j++)
    {
        if (v[i] != v[j])
        {
            v[i + 1] = v[j];
            i++;
        }
    }
    for (int k = 0; k < i + 1; k++)
    {
        cout << v[k] << " ";
    }
}