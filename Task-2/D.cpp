#include <bits/stdc++.h>

using namespace std;

int main()
{
    int v, n;
    cin >> n;
    long long s[n + 1] = {0};
    long long r[n + 1] = {0};
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap

    for (int i = 1; i <= n; i++)
    {
        cin >> v;
        s[i] = s[i - 1] + v;
        pq.push(v);
    }

    for (int i = 1; i <= n; i++)
    {
        v = pq.top();
        r[i] = r[i - 1] + v;
        pq.pop();
    }

    int m, type, start, end;
    cin >> m;
    while (m--)
    {
        cin >> type >> start >> end;
        if (type == 1)
            cout << s[end] - s[start - 1] << endl;
        else
            cout << r[end] - r[start - 1] << endl;
    }
}