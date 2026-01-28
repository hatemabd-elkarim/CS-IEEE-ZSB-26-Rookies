#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a, a + n);

    int start = 0, end = n - 1;

    while (start < end)
    {
        int sum = a[start].first + a[end].first;

        if (sum < x)
            start++;
        else if (sum > x)
            end--;
        else
            break;
    }
    if (start < end)
        cout << ++a[start].second << " " << ++a[end].second << endl;
    else
        cout << "IMPOSSIBLE";
}