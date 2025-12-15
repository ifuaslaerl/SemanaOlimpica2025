// https://atcoder.jp/contests/abc081/tasks/abc081_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int counter = 0;
    bool possible = true;
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] & 1 == 1)
        {
            possible = false;
        }
    }
    while (possible)
    {
        counter++;
        for (int i = 0; i < n; i++)
        {
            arr[i] /= 2;
            if (arr[i] & 1 == 1)
            {
                possible = false;
            }
        }
    }

    cout << counter << "\n";

    return 0;
}