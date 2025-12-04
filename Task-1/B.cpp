#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 1, longest = 1;
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            count++;

        else
        {
            if (count > longest)
                longest = count;
            count = 1;
        }
    }

    cout << max(longest, count) << endl;
}