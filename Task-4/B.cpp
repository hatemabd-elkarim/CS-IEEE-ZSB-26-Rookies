#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int t[n];
    for (int i = 0; i < n; i++)
        cin >> t[i];

    int start = 0, end = n - 1, a = t[start], b = t[end];
    while (end - start != 1)
    {
        if (start == end)
            break;

        if (a > b)
            b += t[--end];
        else if (a < b)
            a += t[++start];
        else
        {
            b += t[--end];
            a += t[++start];
        }
    }
    start++;
    cout << start << " " << n - start << endl;
}