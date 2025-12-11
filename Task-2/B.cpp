#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, n, q;
        cin >> n >> q;
        vector<long long> s(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            s[i] = s[i - 1] + x;
        }

        int l, r, k;
        while (q--)
        {
            cin >> l >> r >> k;
            long long sum = s[n] - s[r] + 1LL * (r - l + 1) * k + s[l - 1];
            cout << ((sum % 2 == 1) ? "YES" : "NO") << endl;
        }
    }
}