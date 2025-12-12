#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(ll m, int k, vector<ll>& v) {
    int k0 = 1;
    ll soma = 0;

    for (int i:v){
        if (i > m) return false;

        if (soma + i > m){
            k0++;
            soma = i;
        }
        else{
            soma += i;
        }
    }
    return k0 <= k;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    int k;
    cin >> n >> k;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {cin >> v[i];}
    
    ll L = 0;
    ll R = 1e15; 
    ll ans = R;
    ll M;

    while (L <= R) {
        M = (R + L) / 2;

        if (check(M, k, v)){
            ans = M;
            R = M - 1;
        } 
        else {
            L = M + 1;
        }
    }

    cout << ans << "\n";

    return 0;
}
