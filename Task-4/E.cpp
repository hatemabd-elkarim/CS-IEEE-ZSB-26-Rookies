#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long x;
    cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int start = 0, end = 0, ans = 0;
    long long sum = 0;

    for (; end < n; end++)
    {
        sum += a[end];

        while (sum > x && start <= end)
            sum -= a[start++];

        if (sum == x)
            ans++;
    }

    cout << ans << endl;
}