#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int main()
{
    int n;
    cout << "size of array :";
    cin >> n;
    int arr[n];
    cout << "Array values ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // hash
    int hash[MAX] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cout << "Number of search queries ";
    cin >> q;
    while (q--)
    {
        int num;
        cout << "Enter number to search ";
        cin >> num;
        cout << hash[num] << endl;
    }
    return 0;
}