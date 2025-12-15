// https://cses.fi/problemset/task/1084

#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m, k;
    cin >> n >> m >> k;
    vector<ll> appl(n, 0);
    vector<ll> apar(m, 0);
    for (int i = 0; i < n; i++)
        cin >> appl[i];
    for (int i = 0; i < m; i++)
        cin >> apar[i];
    sort(appl.begin(), appl.end());
    sort(apar.begin(), apar.end());
    int u, d, counter;
    u = 0;
    d = 0;
    counter = 0;
    while (u < n && d < m)
    {
        ll applicant = appl[u];
        ll apartment = apar[d];

        if (applicant > apartment + k)
        {
            d++;
        }
        else if (applicant < apartment - k)
        {
            u++;
        }
        else
        {
            counter++;
            u++;
            d++;
        }
    }
    cout << counter << "\n";
    return 0;
}