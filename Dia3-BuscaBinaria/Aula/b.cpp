#include<bits/stdc++.h>
using namespace std;

bool check(long long time, long long t, const vector<int>& k) {
    long long total_products = 0;
    
    // Para cada máquina, calculamos quantos produtos ela pode fazer no 'time' dado.
    for (int production_time : k) {
        total_products += time / production_time;
        if (total_products >= t) {
            return true;
        }
    }

    return total_products >= t;
}

void solve() {
    int n;
    long long t;
    
    cin >> n >> t;

    // k: vetor de tempos de produção (k_i <= 10^9) - int é suficiente
    vector<int> k(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> k[i];
    }



    // L (Lower Bound): O tempo mínimo é 0.
    long long L = 0;
    // R (Upper Bound): O tempo máximo ocorre quando a máquina mais lenta (max(k_i)) 
    // produz todas as 't' unidades. max(k_i) * t pode ser até 10^9 * 10^9 = 10^18.
    // Usamos 2 * 10^18 para uma margem de segurança.
    long long R = 2e18; 
    
    // ans: Variável para armazenar o menor tempo válido encontrado.
    long long ans = R;

    while (L <= R) {
        // M: O tempo a ser testado
        long long M = (R + L) / 2;

        if (check(M, t, k)) {
            // Se M é um tempo válido (conseguimos fazer >= t produtos):
            // 1. Armazenamos M como o melhor tempo até agora.
            ans = M;
            // 2. Tentamos tempos menores, movendo o limite superior.
            R = M - 1;
        } else {
            // Se M é muito curto (não conseguimos fazer t produtos):
            // 1. Precisamos de mais tempo.
            // 2. Movemos o limite inferior.
            L = M + 1;
        }
    }

    // O resultado final é o menor tempo válido 'ans'
    cout << ans << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    solve();

    return 0;
}
