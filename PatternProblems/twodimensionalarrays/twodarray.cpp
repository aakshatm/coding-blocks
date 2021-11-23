#include <iostream>
using namespace std;

void wavePrint(int a[][4], int n, int m){
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
}

int main()
{
    int n, m;
    n = 3, m = 4;
    int a[3][4];
    int val = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < m; col++)
        {
            a[row][col] = val;
            val++;
        }
    }
    wavePrint(a, n, m);
    return 0;
}