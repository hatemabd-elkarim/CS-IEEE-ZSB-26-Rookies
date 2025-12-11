#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 1, 0), pref(n + 1, 0), suff(n + 2, 0);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++)
    {
        int iend = n - i + 1;
        pref[i] = gcd(a[i], pref[i - 1]);
        suff[iend] = gcd(a[iend], suff[n - i + 2]);
    }

    int answer = 0;
    for (int i = 1; i <= n; i++)
    {
        int candidate = gcd(pref[i - 1], suff[i + 1]);
        answer = max(answer, candidate);
    }

    cout << answer << endl;
}