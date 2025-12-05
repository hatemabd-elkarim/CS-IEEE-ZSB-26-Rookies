#include <bits/stdc++.h>
#include <map>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> values(n);
    map<int, int> possible;

    for (int i = 0; i < n; i++)
    {
        cin >> values[i];
        int sol = x - values[i];

        if (possible.find(sol) != possible.end())
        {
            cout << i + 1 << " " << possible[sol] + 1 << endl;
            return 0;
        }

        possible[values[i]] = i;
    }

    cout << "IMPOSSIBLE" << endl;
}