#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], res = 0, i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            res ^= a[i];
        }

        for (i = 0; i < n; i++)
        {
            res ^= a[i];
            if (a[i] == res)
                break;
        }
        cout << a[i] << endl;
    }
}