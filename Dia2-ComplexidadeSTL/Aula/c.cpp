#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin >> n;
    vector<ll> arr(n, 0);
    ll anterior;
    ll answ = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            anterior = arr[i];
            continue;
        }
        if (arr[i] < anterior)
        {
            answ += anterior - arr[i];
            arr[i] = anterior;
        }
        anterior = arr[i];
    }
    cout << answ;

    return 0;
}