#include <bits/stdc++.h>
using namespace std;

void revarray(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    revarray(i + 1, arr, n);
}
int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    int a[n];
    cout << "Enter value of arr: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << endl
         << "Reversed array is: ";
    revarray(0, a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}