


list<pii> graph[MAX];
vi dist(300, INF);
bool visited[MAX] = {0};

void BellmanFord(int src, int n) {
	dist[src] = 0;
	fo(0, n-1) {
		fo(1, n+1) {
			for(auto node: graph[i]) {
				int u = node.first;
				int w = node.second;

				if(dist[u] > dist[i]+w) {
					dist[u] = dist[i]+w;
				}
			}
		}
	}
}