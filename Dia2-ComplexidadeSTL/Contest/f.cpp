// https://cses.fi/problemset/task/1713

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int curr, counter;
    counter = 0;
    cin >> curr;
    for (int i = 1; i <= sqrt(curr); i++)
    {
        if ((curr % i == 0) && (i * i == curr))
        {
            counter++;
        }
        else if (curr % i == 0)
        {
            counter += 2;
        }
    }
    cout << counter << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }

    return 0;
}