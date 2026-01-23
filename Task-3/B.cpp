#include <bits/stdc++.h>

using namespace std;

int bsFindLastIndexOf(int target, int arr[], int len);
int main()
{
    int n;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
        cin >> x[i];

    sort(x, x + n);

    int q, m;
    cin >> q;

    while (q--)
    {
        cin >> m;
        int index = bsFindLastIndexOf(m, x, n);
        cout << ++index << endl;
    }
}

int bsFindLastIndexOf(int target, int arr[], int len)
{ // assuming that there is repetition
    int index;
    int start = 0, end = len - 1, mid;
    while (start < end)
    {
        mid = start + ((end - start) + 1) / 2;

        if (arr[mid] < target)
            start = mid + 1;
        else if (arr[mid] > target)
            end = mid - 1;
        else
            start = mid;
    }
    if(arr[end] > target)
        index = end - 1;
    else
        index = end;

    return index;
}