#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> diff(200002, 0);

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;

        diff[l]++;
        diff[r + 1]--;
    }

    vector<int> freq(200001, 0);
    int counter = 0;

    for (int i = 1; i <= 200000; i++)
    {
        counter += diff[i];
        freq[i] = counter;
    }

    vector<int> p(200001, 0);

    for (int i = 1; i <= 200000; i++)
    {
        p[i] = p[i - 1];

        if (freq[i] >= k)
        {
            p[i]++;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;

        cout << p[r] - p[l - 1] << endl;
    }
}