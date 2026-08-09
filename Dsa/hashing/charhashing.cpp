#include <bits/stdc++.h>
using namespace std;
#define MAX 256
int main()
{
    string s;
    cin >> s;
    int hash[MAX] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]] += 1;
    }
    int q;
    cout << "Number of search queries ";
    cin >> q;
    while (q--)
    {
        char c;
        cout << "Enter Char to search ";
        cin >> c;
        cout << hash[c] << endl;
    }
    return 0;
}