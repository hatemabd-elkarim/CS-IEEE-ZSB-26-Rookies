#include <bits/stdc++.h>

using namespace std;

int main()
{

    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);

    int x, n, q;
    cin >> n >> q;
    int s[n + 1][4] = {0};

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 3; j++)
            s[i][j] = s[i - 1][j];
        cin >> x;
        s[i][x] += 1;
    }

    int start, end;
    while (q--)
    {
        cin >> start >> end;
        int hol = s[end][1] - s[start - 1][1];
        int gue = s[end][2] - s[start - 1][2];
        int jer = s[end][3] - s[start - 1][3];
        cout << hol << " " << gue << " " << jer << endl;
    }
}
