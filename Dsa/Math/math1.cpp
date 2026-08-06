#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n = 7877;
    // int count = 0;

    // while (n)
    // {
    //     count++;
    //     n /= 10;
    // }
    // cout << "total didgits in n are : " << count;

    // other way to count didgits
    // int cnt = (int)(log10(n) + 1);
    // cout << cnt;
    // int n;
    // cout << "Enter value of n: ";
    // cin >> n;
    // int revNum = 0;
    // while (n)
    // {
    //     int lsdigit = n % 10;
    //     revNum = (revNum * 10) + lsdigit;
    //     n /= 10;
    // }
    // cout << "reverse Number is : " << revNum;

    // armstrong number ex;153
    // int arms = 0;
    // int orignal = n;
    // while (n)
    // {
    //     int j = n % 10;
    //     arms = arms + (j * j * j);
    //     n /= 10;
    // }
    // if (orignal == arms)
    //     cout << "Its Armstrong number";
    // else
    //     cout << "Not Armstrong number";

    // factors

    // vector<int> v;
    // for (int i = 1; i < sqrt(n); i++)
    // {
    //     if (n % i == 0)
    //     {
    //         v.push_back(i);
    //         if ((n / i) != i)
    //         {
    //             v.push_back(n / i);
    //         }
    //     }
    // }
    // sort(v.begin(), v.end());
    // for (auto it : v)
    //     cout << it << " ";

    // prime number
    // int n = 15;
    // int cnt = 0;
    // for (int i = 1; i * i <= n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cnt++;
    //         if ((n / i) != i)
    //             cnt++;
    //     }
    // }
    // if (cnt == 2)
    //     cout << "Prime Number";
    // else
    //     cout << "Not Prime Number";

    // GCD
    int a = 150, b = 120;
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        cout << b;
    else
        cout << a;
}