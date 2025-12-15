// https://atcoder.jp/contests/abs/tasks/abc088_b?lang=en
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    int sumA, sumB;
    sumA = 0;
    sumB = 0;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());
    bool alice = true;
    for (int i = 0; i < n; i++)
    {
        alice ? sumA += arr[i] : sumB += arr[i];
        alice = !alice;
    }
    cout << sumA - sumB << "\n";
    return 0;
}