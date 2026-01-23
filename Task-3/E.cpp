#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    long long start = 0, end = 2e9;
    long long ans = end;

    while (start <= end)
    {
        long long mid = (start + end) / 2;

        int j = 0;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            while (j < m && b[j] < a[i] - mid)
            {
                j++;
            }
            if (j == m || abs(b[j] - a[i]) > mid)
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << ans << "\n";
}
