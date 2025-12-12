#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

double buscaBinaria(double c, double f, double C){
    int cont = 301;
    while(cont--){
        double m = c + (f - c)/2;
        double x = m*m + sqrt(m);
        if(C > x){
            c = m;
        }
        if(C < x){
            f = m;
        }
    }
    return c;
}

int main() {
    double C, x, resposta;
    
    cin >> C;

    resposta = buscaBinaria(1, 1e5, C);
    
    cout << fixed << setprecision(10) << resposta << endl;

    return 0;
}
