#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int BBMenor(vector<ll>& arr, int e, int d, ll x) { 
	while (e <= d){ 
	    int m = (d + e)/2;
	    if (arr[m] < x){ 
	        e = m + 1;
	    }
	    else{
	        d =  m - 1;
	    }
    }
    return d;
}

int BBMaior(vector<ll>& arr, int e, int d, ll x) { 
	while (e <= d){ 
	    int m = (d + e)/2;
	    if (arr[m] <= x){ 
	        e = m + 1;
	    }
	    else{
	        d =  m - 1;
	    }
    }
    return e;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<ll> N(n);
    for (int i = 0; i < n; i++) cin >> N[i];

    int q;
    cin >> q;
    vector<ll> Q(q);
    for (int j = 0; j < q; j++) cin >> Q[j];

    int Maior,Menor;
    for (ll i:Q){
        Maior = BBMaior(N,0,n-1,i);
        Menor = BBMenor(N,0,n-1,i);

        if(Menor == -1) cout << "X ";
        else cout << N[Menor] << " ";

        if(Maior == n) cout << "X\n";
        else cout << N[Maior] << "\n";
    }
    return 0;
}
