#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    long long result = 1;
    long long mod = 1e9 + 7;

    // to overcome overflow and knowing that:
    // (x * y) % m = ( (x % m) * (y % m) ) % m
    for (int i = 0; i < n; i++)
        result = (result << 1LL) % mod; // << 1LL eqivalent to * 2LL, 2LL % (1e9 + 7) = 2LL

    cout << result << endl;
}