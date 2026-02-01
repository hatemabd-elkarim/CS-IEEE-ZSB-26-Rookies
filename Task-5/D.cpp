#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int x[n], xord[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        xord[i + 1] = xord[i] ^ x[i]; // prefix index technique where x ^ 0 = x
    }

    while (q--)
    {
        int a, b;
        cin >> a >> b;
        int req = xord[b] ^ xord[a - 1]; // if x ^ y = z then z ^ x = y
        cout << req << endl;
    }
}