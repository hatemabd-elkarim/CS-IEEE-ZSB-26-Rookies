#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long t;
    cin >> n >> t;

    int k[n];
    for (int i = 0; i < n; i++)
        cin >> k[i];

    sort(k, k + n);

    long long start = 1LL, end = 1LL * k[0] * t;
    long long ans = end;
    while (start <= end)
    {
        long long mid = start + ((end - start) / 2);
        long long products = 0;

        for (long long time : k)
        {
            products += mid / time;
            if (products >= t) // NEVER COMPARE LONG LONG TO INT
                break;
        }

        if (products >= t)
        {
            ans = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    cout << ans << endl;
}
