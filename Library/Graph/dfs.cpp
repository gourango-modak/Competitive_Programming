



void DFSUntil1(int v, bool visited[]) {
	if(visited[v] == false) {
		visited[v] = 1;
	    for(auto itr: adj[v]) {
	        if(visited[itr] == 0) {
	        	DFSUntil1(itr, visited);
	        }
	    }
	}
}

void DFS() {
	bool visited[V];
	memset(visited, false, sizeof visited);
	DFSUntil1(0, visited);
}




// 2D grid DFS

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

void DFS(int i, int j, int time, bool visited[][201]) {
	if(graph[i][j] == '#' || graph[i][j] == 'J') return;
	if(visited[i][j] == 0) {
		visited[i][j] = 1;
		preFireGraph[i][j] = time;
		fo(p, 4) {
			if(i+dx[p] >= 0 && i+dx[p] <n && j+dy[p] >=0 && j+dy[p]<n) {
				if(visited[i+dx[p]][j+dy[p]] == 0) {
					preFireGraph[i+dx[p]][j+dy[p]] = time;
					DFS(i+dx[p], j+dy[p], time+1, visited);
				}
			}
		}
	}
}