#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int flagdidswap = 0;
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flagdidswap = 1;
            }
        }
        if (flagdidswap == 0)
            break;
        cout << "not print runs if already sorted" << endl;
    }
}
int main()
{
    // int arr[] = {22, 11, 4, 5, 6, 99, 5};
    int arr[] = {1, 2, 3, 4, 5, 6, 9}; // used flag to avoid sorting if already sored
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}