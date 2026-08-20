#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 20, 30, 30, 25,39,39};
    int maxx = v[0];
    int secMaxx = -1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > maxx)
        {
            secMaxx = maxx;
            maxx = v[i];
        }
        else if (v[i] < maxx && v[i] > secMaxx)
            secMaxx = v[i];
    }

    cout << "Maximum of array is : " << maxx << " " << secMaxx;
}