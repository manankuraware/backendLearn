#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> arr = {1, 2, 3, 3, 3, 1, 2, 6};
    vector<char> arr = {'a', 'a', 'b', 'b', 'c','z'};
    // map<int, int> mpp;
    map<char, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }

    return 0;
}