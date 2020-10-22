




void BFS(int start, int end) {
    bool visited[V];
    int dist[V];
    memset(visited, false, sizeof visited);
    memset(dist, 0, sizeof dist);
    
    queue<int> q;

    q.push(start);
    visited[start] = 1;

    while(!q.empty()) {
        int vertex = q.front();
        q.pop();

        if(vertex == end) break;

        for(auto ele: adj[vertex]) {
            if(visited[ele] == false) {
                visited[ele] = 1;
                q.push(ele);
                dist[ele] = dist[vertex] + 1;
            }
        }
    }
}



// 2D grid BFS

const int dx[4] = {-1, 1, 0, 0};
const int dy[4] = {0, 0, 1, -1};

bool isValid(int i, int j, int k) {
    if(i>=0 && i<n && j>=0 && j<n && visited[i][j] == 0) return true;
    return false;
}

 
void BFS(int i, int j) {

    fo(i, n) fo(j, n) visited[i][j] = 0;
    fo(i, n) fo(j, n) dist[i][j] = 0;
    
    queue<pii> q;
    q.push(make_pair(i,j));
    visited[i][j] = 1;
 
    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
 
        q.pop();

        fo(i, 4) {
            if(isValid(x+dx[i], y+dy[i], k)) {
 
                int nX = x+dx[i];
                int nY = y+dy[i];
 				dist[nX][nY] = dist[x][y]+1;
                visited[nX][nY] = 1;
                q.push(make_pair(nX,nY));
            }
        }
    }
}