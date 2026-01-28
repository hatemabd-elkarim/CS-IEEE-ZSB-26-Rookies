#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int w[n];
        for (int i = 0; i < n; i++)
            cin >> w[i];

        int start = 0, end = n - 1, a = w[start], b = w[end];
        int ans = 0;
        while (start < end)
        {
            if (a > b)
                b += w[--end];
            else if (a < b)
                a += w[++start];
            else
            {
                ans = max(ans, (start + 1) + (n - end)); // fix: corrected formula
                b += w[--end];
                a += w[++start];
            }
        }

        if (start == end)
        {
            if (w[start] + min(a, b) == max(a, b))
                ans++;
        }
        else
            ans = n;
        cout << ans << endl;
    }
}