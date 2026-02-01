#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a == b) // already equal so no operations needed
        {
            cout << 0 << endl;
            continue;
        }

        if (64 - __builtin_clzll(b) > 64 - __builtin_clzll(a)) // XOR with a smaller or equal number of bits cannot create a higher MSB
        {
            cout << -1 << endl;
            continue;
        }

        long long x = a ^ b; // a ^ x = b then x = a ^ b

        if (x <= a) // only one step
        {
            cout << 1 << endl;
            cout << x << endl;
        }

        else
        {
            // we can make it in two steps the first with removing the msb
            long long x1 = x ^ (1 << 63 - __builtin_clzll(a)); // this gurantee x1 <= a and x2 <= a ^ x1
            long long x2 = x1 ^ x;

            cout << 2 << endl;
            cout << x1 << " " << x2 << endl;
        }
    }
    return 0;
}
