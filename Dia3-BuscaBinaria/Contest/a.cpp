#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int buscaBinaria(vector<ll>& arr, ll e, ll d, ll x) { 
	if (e > d){ 
	    return -1;
	}
	ll m = (d + e)/2;
	if (arr[m] < x){ 
	    return buscaBinaria(arr, m + 1, d, x);
	}
	if (arr[m] > x){ 
	    return buscaBinaria(arr, e, m - 1, x);
	}
	return m;
};



int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,k,r;
    cin >> n >> k;

    vector<ll> arr(n);
    vector<ll> arr2(n);

    for(ll i = 0; i <n; i++){
        cin >> arr[i];
    }

    arr2 = arr;
    sort(arr.begin(),arr.end());
    

    for(int j = 0; j < n; j++){
        r = buscaBinaria(arr,j+1, n-1, k - arr[j]);

        if (r!= -1){
            auto it1 = find(arr2.begin(),arr2.end(),arr[r]);
            auto it2 = find(it1 + 1,arr2.end(),arr[j]);
            if (it2 == arr2.end()) it2 = find(arr2.begin(),it1 + 1,arr[j]);

            ll idx1 = distance(arr2.begin(),it1) + 1;
            ll idx2 = distance(arr2.begin(),it2) + 1;

            cout << idx1 << " " << idx2;
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
