// https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<ll, ll>> arr;
    map<ll, ll> freq;
    for (int i = 0; i < n; i++)
    {
        pair<ll, ll> curr;
        cin >> curr.first >> curr.second;
        freq[curr.first] += 1;
        freq[curr.second] -= 1;
    }
    int sum = 0;
    int temp = 0;
    for (auto &i : freq)
    {
        temp += i.second;
        if (temp > sum)
            sum = temp;
    }
    cout << sum << "\n";
    return 0;
}