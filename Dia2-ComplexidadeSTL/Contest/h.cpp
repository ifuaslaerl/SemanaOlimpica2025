// https://cses.fi/problemset/task/1629

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, counter;
    counter = 0;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    for (int i = 0; i < n; i++)
    {
        pair<ll, ll> curr;
        cin >> curr.second >> curr.first;
        arr[i] = curr;
    }
    sort(arr.begin(), arr.end());
    ll lastF = arr[0].first;
    ll lastI = arr[0].second;
    counter++;
    for (int i = 1; i < n; i++)
    {
        if (arr[i].second >= lastF)
        {
            counter++;
            lastF = arr[i].first;
            lastI = arr[i].second;
        }
        else
        {
            continue;
        }
    }
    cout << counter << "\n";
    return 0;
}