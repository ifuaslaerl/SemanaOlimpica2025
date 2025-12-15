// https://atcoder.jp/contests/abc085/tasks/abc085_b

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    stack<int> kagami;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    kagami.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            kagami.push(arr[i]);
        }
    }

    cout << kagami.size();

    return 0;
}