#include <iostream>
using namespace std;
int sumofn(int n)
{
    int sum = n;
    if (!n)
        return sum;

    // 1. Fixed the typo: sumof -> sumofn
    sum += sumofn(n - 1);

    // 2. Added the missing return statement
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    cout << sumofn(n);
    return 0;
}