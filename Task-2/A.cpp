#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int a;
    long long s[n + 1] = {0};
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        s[i] = s[i - 1] + a;
    }

    int start, end;
    for (int i = 0; i < q; i++)
    {
        cin >> start >> end;
        cout << s[end] - s[start - 1] << endl;
    }
}