#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int buscaBinaria(vector<ll>& arr, int e, int d, ll x) { 
	if (e > d){ 
	    return -1;
	}
	int m = (d + e)/2;
	if (arr[m] < x){ 
	    return buscaBinaria(arr, m + 1, d, x);
	}
	if (arr[m] > x){ 
	    return buscaBinaria(arr, e, m - 1, x);
	}
	return m;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,k;
    cin >> n >> k;
    vector<ll> S(n);
    for (int i = 0; i < n; i++) cin >> S[i];
    vector<ll> T(k);
    for (int j = 0; j < k; j++) cin >> T[j];
    
    int a;
    for (ll i:T){
        a = buscaBinaria(S,0,n-1,i);
        if(a != -1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
