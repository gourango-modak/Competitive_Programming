



list<pii> graph[MAX];
vi dist(300, INF);
bool visited[MAX] = {0};



void DijkstraShortestPath(int src) {

    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vi dist(V, INF);
    pq.push(make_pair(0, src));

    while(!pq.empty()) {

        int u = pq.top().second;
        pq.pop();

        for(auto ele: adj[u]) {
            int v = ele.first;
            int w = ele.second;
            
            if(dist[v] > dist[u]+w) {
                dist[v] = dist[u]+w;
                pq.push(make_pair(dist[v], v));
            }
        }

    }
}