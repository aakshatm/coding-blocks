#include <iostream>
using namespace std;

int main()
{
    int n, m;
    n = 3, m = 4;
    int a[n][m];
    int val = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            a[row][col] = val;
            val++;
        }
    }

    // Wave Pattern

    for (int col = 0; col < m; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = 0; row < n; row++)
            {
                cout << a[row][col] << " ";
            }
        }
        else
        {
            for (int row = n - 1; row >= 0; row--)
            {
                cout << a[row][col] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}