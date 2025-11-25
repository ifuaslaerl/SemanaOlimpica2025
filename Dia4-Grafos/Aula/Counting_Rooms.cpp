#include <bits/stdc++.h>
using namespace std;

// Primeiro declaro as variaveis que vou usar
int n, m; // dimencoes do mapa
vector<string> grid; // o mapa
vector<vector<bool>> vis;

void dfs(int i, int j);
bool dentro(int i, int j);

int main(){

	cin >> n >> m;
	
	vis.resize(n, vector<bool>(m));
	grid.resize(n);
	for(int i=0; i<n; i++){
		cin >> grid[i];
	}

	// para cada sala nova que encontro, tento explorar o maximo que consigo
	int salas=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(grid[i][j] != '#' && !vis[i][j]){ // encontrei uma sala nova
				salas++;
				dfs(i, j);	
			}
		}
	}

	cout << salas << "\n";	

	return 0;
}

void dfs(int i, int j){
	vis[i][j] = true;

	// tento todas direcoes que posso ir
	if(dentro(i+1, j) && grid[i+1][j] != '#' && !vis[i+1][j]) dfs(i+1, j);	
	if(dentro(i-1, j) && grid[i-1][j] != '#' && !vis[i-1][j]) dfs(i-1, j);	
	if(dentro(i, j+1) && grid[i][j+1] != '#' && !vis[i][j+1]) dfs(i, j+1);	
	if(dentro(i, j-1) && grid[i][j-1] != '#' && !vis[i][j-1]) dfs(i, j-1);	
}

bool dentro(int i, int j){
	if(i<0 || i>=n) return false;
	if(j<0 || j>=m) return false;
	return true;
}
