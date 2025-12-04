#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 1LL * n * (n + 1) / 2;
    if (sum % 2)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
        cout << "YES" << endl;

    stack<int> first, second;
    first.push(n);
    long long firstsum = n;

    sum = sum / 2;
    for (int i = n - 1; i >= 1; i--)
    {
        if (sum - firstsum >= i)
        {
            first.push(i);
            firstsum += i;
        }
        else
            second.push(i);
    }

    /* cout << first.size() << endl;
    while (!first.empty())
    {
        cout << first.top() << " ";
        first.pop();
    }

    cout << endl;
    cout << second.size() << endl;
    while (!second.empty())
    {
        cout << second.top() << " ";
        second.pop();
    }  */

    // ostringstream " like stringbuilder" for fast output 
    ostringstream out;

    out << first.size() << "\n";
    while (!first.empty())
    {
        out << first.top() << " ";
        first.pop();
    }
    out << "\n";

    out << second.size() << "\n";
    while (!second.empty())
    {
        out << second.top() << " ";
        second.pop();
    }

    cout << out.str();
}