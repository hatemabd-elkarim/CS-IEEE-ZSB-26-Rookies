#include "bits/stdc++.h"
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        map<int, int> counts;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            counts[arr[i]]++;
        }

        map<int, int> quota;
        bool ok = true;
        for (auto it = counts.begin(); it != counts.end(); ++it)
        {
            int val = it->first;
            int c = it->second;
            if (c % k != 0)
            {
                ok = false;
                break;
            }
            quota[val] = c / k;
        }

        if (!ok)
        {
            cout << 0 << endl;
            continue;
        }

        long long awesome = 0;
        map<int, int> window;
        int start = 0, end = 0;

        while (start < n)
        {
            while (end < n && window[arr[end]] + 1 <= quota[arr[end]])
            {
                window[arr[end]]++;
                end++;
            }

            awesome += (end - start);

            window[arr[start]]--;
            start++;
        }

        cout << awesome << endl;
    }
}
