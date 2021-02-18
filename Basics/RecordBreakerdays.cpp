#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, i, j, mx = -999, rd = 0;

    cout << "Enter no. of Elements:";
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] > mx && a[i] > a[i + 1])
        {
            rd++;
        }
        mx = max(mx, a[i]);
    }
    cout << rd << endl;
}