#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    int H[N], B[M];
    for (int i = 0; i < N; i++)
        cin >> H[i];
    for (int i = 0; i < M; i++)
        cin >> B[i];

    sort(H, H + N);
    sort(B, B + M);

    bool possible = true;

    // no need for binary search: compare lightest k heads with heaviest bodies
    for (int i = 0; i < K; i++)
    {
        if (H[i] > B[M - K + i])
        {
            possible = false;
            break;
        }
    }

    cout << (possible ? "Yes" : "No") << "\n";
}
