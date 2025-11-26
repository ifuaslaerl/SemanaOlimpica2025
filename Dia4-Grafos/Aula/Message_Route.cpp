#include <bits/stdc++.h>
using namespace std;

// Declaro as variaveis que vou usar globalmente
int n, m; // numero de vertices e de arestas
vector<vector<int>> adj; // lista de adjacencias
vector<bool> vis; // guardo se ja visitei cada vertice
vector<int> last; // guardo o ultimo vertice que visitei antes do vertice atual

void bfs(int x);

int main(){
	// Recebo os inputs e aloco o tamanho dos meus vetores
	cin >> n >> m;

	vis.resize(n+1);
	last.resize(n+1, -1);
	adj.resize(n+1);
	for(int i=0; i<m; i++){
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	bfs(1); // Verifico o caminho minimo para todo vertice a partir do 1

	if(!vis[n]){ // se eu nao visitei n, eh impossivel fazer esse caminho
		cout << "IMPOSSIBLE\n";
		return 0;
	}

	vector<int> path;
	int curr = n; // comeco no ultimo vertice
	while(curr!=-1){ // enquanto existir um vertice anterior, visito o anterior
		path.push_back(curr);
		curr = last[curr];
	}

	// O caminho eh obtido do ultimo para o primeiro
	reverse(path.begin(), path.end()); // Invertemos o caminho para obter a resposta

	cout << path.size() << "\n";
	for(int v: path) cout << v << " ";
	cout << "\n";

    	return 0;
}

void bfs(int x){

	queue<int> fila;

	fila.push(x);
	vis[x] = true;

	while(!fila.empty()){
		
		int v = fila.front();
		fila.pop();

		for(int prox: adj[v]){
			if(!vis[prox]){ 
				// Sempre que eu visitar outro vertice eu anoto de onde eu vim
				vis[prox] = true;
				last[prox] = v;
				fila.push(prox);
			}	
		}

	}	

}
