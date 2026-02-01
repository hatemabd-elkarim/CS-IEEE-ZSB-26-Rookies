#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n], res = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        res ^= a[i]; // at the end, res = xor of all values, beacause their number is even so each number repeats by an odd number
    }
    for (int i = 0; i < n; i++)
    {
        int req = res ^ a[i]; // if x ^ y = z then z ^ x = y and z ^ y = x
        cout << req;
        cout << ((i == n - 1) ? "\n" : " ");
    }
}