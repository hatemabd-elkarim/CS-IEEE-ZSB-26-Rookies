#include <iostream>
#include <vector>
using namespace std;

struct robot
{
    int weight;
    vector<pair<int, bool>> parts;
};

int main()
{
    robot r;
    int n, w, q, p;
    cin >> r.weight >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> w;
        r.parts.push_back({w, false});
    }

    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> p;
        if (r.parts[p - 1].second) {
            r.weight -= r.parts[p - 1].first;
            r.parts[p-1].second = false;
        }
        else {
            r.weight += r.parts[p - 1].first;
            r.parts[p - 1].second = true;
        }
        cout << r.weight << endl;
    }
}