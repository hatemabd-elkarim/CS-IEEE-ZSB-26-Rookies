#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long p[n], total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        total += p[i];
    }

    long long ans = LLONG_MAX;

    // iterate over all subsets where for n apples there are 2 ** n subsets
    for (int mask = 0; mask < (1 << n); mask++)
    {
        long long firstSum = 0;

        for (int i = 0; i < n; i++)
        {
            if (mask & (1 << i))
                firstSum += p[i];
        }
        // secondSum = total - firstSum then diff = (total - firstSum) - firstSum = total - 2 * firstSum
        long long diff = abs(total - 2 * firstSum);
        ans = min(ans, diff);
    }

    cout << ans << endl;
    return 0;
}
