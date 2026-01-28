#include <iostream>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    // can't use binary search because array cannot be sorted
    // can't use prefix sum because the subarray can be sliced from the middle

    int start = 0, end = 0, sum = a[0], ans = 0;

    while (end < n)
    {
        if (sum > t)
        {
            sum -= a[start++];
        }
        else
        {
            ans = max(ans, end - start + 1);
            sum += a[++end];
        }
    }
    cout << ans << endl;
}