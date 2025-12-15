// https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, sum;
    cin >> n;
    sum = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll curr;
        cin >> curr;
        sum += curr;
    }
    cout << ((1 + n) * n) / 2 - sum << "\n";

    return 0;
}