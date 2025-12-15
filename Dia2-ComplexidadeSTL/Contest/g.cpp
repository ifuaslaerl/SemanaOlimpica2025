// https://cses.fi/problemset/task/1640

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n, x;
    cin >> n >> x;
    vector<ll> arr(n);
    map<ll, vector<ll>> pos;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        pos[arr[i]].push_back(i);
    }
    sort(arr.begin(), arr.end());
    ll l, r;
    l = 0;
    r = n - 1;
    bool found = false;
    while (l < r || found)
    {
        if (arr[l] + arr[r] == x)
        {
            found = true;
            break;
        }
        else if (arr[l] + arr[r] > x)
        {
            r--;
        }
        else if (arr[l] + arr[r] < x)
        {
            l++;
        }
    }
    if (pos[arr[l]][0] != pos[arr[r]][0])
    {
        found ? cout << pos[arr[l]][0] + 1 << " " << pos[arr[r]][0] + 1 : cout << "IMPOSSIBLE";
    }
    else
    {
        found ? cout << pos[arr[l]][0] + 1 << " " << pos[arr[r]][1] + 1 : cout << "IMPOSSIBLE";
    }

    return 0;
}