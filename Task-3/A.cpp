#include <iostream>
#include <limits.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int start = 1, end = n, ans = INT_MAX;
    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        int acc = 0, toAdd = mid;
        while (toAdd > 0)
        {
            acc += toAdd;
            toAdd /= k;
        }

        if (acc >= n)
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    cout << ans << endl;
}
