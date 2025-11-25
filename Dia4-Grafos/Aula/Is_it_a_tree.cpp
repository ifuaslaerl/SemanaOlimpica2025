#include <bits/stdc++.h>
using namespace std;

// Vamos declarar as variáveis que vamos usar antes de tudo
int n, m; // numero de vertices e numero de arestas
vector<vector<int>> adj; // lista de adjacencias do grafo
vector<bool> vis; // guarda se o vertice foi visitado
bool ciclo=false; // guarda se existe um ciclo no grafo

void dfs(int, int);

int main(){
	// Agora recebemos os inputs
	cin >> n >> m;

	vis.resize(n+1);
	adj.resize(n+1); // definimos o tamanho da lista de adjacencia pra n+1 elementos
	for(int i=0; i<m; i++){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	// Para o grafo ser uma árvore, 3 propriedades precisam ser respeitadas:
	// m = n-1
	// o grafo é conexo		
	// o grafo é aciclico

	// eh facil verificar se m = n-1
	// podemos resolver essa questao verificando se o grafo eh aciclico ou conexo agora

	// opcao 1: conexo?
	bool conexo = true;
	dfs(1, 0);
	for(int v=1; v<=n; v++){
		if(!vis[v]) conexo = false;
	}
	
	// se duas condicoes forem verdade, a terceira tambem eh verdade
	// estou verificando as 3 condicoes para ser didatico	
	bool arvore = (m==n-1 && conexo && !ciclo);
	if(arvore) cout << "YES\n";
	else cout << "NO\n";

	return 0;
}

void dfs(int v, int pai){
	vis[v] = true;	
	for(int prox: adj[v]){
		if(prox == pai) continue;
		if(vis[prox]) ciclo = true;
		else dfs(prox, v);
	}
}



