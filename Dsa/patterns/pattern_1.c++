#include <iostream>
using namespace std;
void simplepattern(int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void lefttrainglepattern(int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void lft_colnumberpattern(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}

void dwn_trainglepattern(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}

void dwn_trainglenumberpattern(int &n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << " " << j << " ";
        }
        cout << endl;
    }
}

void up_pyramidpattern(int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void dwn_pyramidpattern(int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "*";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

void rigttriangle(int &n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void binaryvaluesonly(int &n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        if ((i % 2) == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start; // for alternative numbers
        }

        cout << endl;
    }
}

void staircasepattern(int &n)
{
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

void countertriangle(int &n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void chartriangle(int &n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void chardwntriangle(int &n)
{

    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch < 'A' + n - i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void charsametriangle(int &n)
{

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void charpyramidtriangle(int &n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter number of start to print in nxn format ";
    cin >> n;
    // simplepattern(n);
    // lefttrainglepattern(n);
    // lft_colnumberpattern(n);
    // dwn_trainglepattern(n);
    // dwn_trainglenumberpattern(n);
    // up_pyramidpattern(n);
    // dwn_pyramidpattern(n);
    // rigttriangle(n);
    // binaryvaluesonly(n);
    // staircasepattern(n);
    // countertriangle(n);
    // chartriangle(n);
    // chardwntriangle(n);
    // charsametriangle(n);
    charpyramidtriangle(n);
}