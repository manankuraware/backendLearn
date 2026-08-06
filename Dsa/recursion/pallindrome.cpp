#include <bits/stdc++.h>
using namespace std;

bool pallindrome(int i, string &s)
{
    if (i >= s.size() / 2)
        return true;
    if (s[i] != s[s.size() - i - 1])
        return false;
    return pallindrome(i + 1, s);
}
int main()
{
    string str = "madam";
    if (pallindrome(0, str))
        cout << "Yes";
    else
        cout << "No";
}