

// using DFS

bool isValid(int col, int v, int color[]) {
	for(auto ver: graph[v]) if(color[ver] == col) return false;
	return true;
}

bool DFSUntil(int v, int color[]) {
	if(v == n+1) return true;
	fv(col, colSz) {
		color[v] = col;
	    if(isValid(col, v, color)) {
	    	if(DFSUntil(v+1, color) == true) return true;
	    	color[v] = -1;
	    }

	}
	return false;
}


// Using BFS and 2 Color

int BFS() {
	int m = 0;
	
	fo(0, MAX) {
		if(color[i] == 0 && graph[i].size()>0) {
			queue<int> q;
			q.push(i); int red = 0, black = 0;
			color[i] = 1;
			black++;
			while(!q.empty()) {
				int u = q.front();
				q.pop();
				for(auto v : graph[u]) {
					if(color[v] == 0) {

						q.push(v);

						if(color[u] == 1) {
							color[v] = 2;
							red++;
						}
						else {
							color[v] = 1;
							black++;
						}
					}
				}
			}
			m += max(red, black);
		}
	}
	return m;
}