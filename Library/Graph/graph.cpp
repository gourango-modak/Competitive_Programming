class Graph
{
    int V;
    list<pii> *adj;
    public:
        Graph(int v) {
            this->V = v;
            this->adj = new list<pii>[V];
        }
 
        void addEdge(int u, int v, int w) {
            adj[u].push_back(make_pair(v,w));
        }
 
        void DFSUntil1(int v, bool visited[][101]) {
            for(auto itr: adj[v]) {
                if(visited[v][itr.first] == 0 && (dfs_for_1 != 0 ||  visited[itr.first][v] == 0)) {
                	visited[v][itr.first] = 1;
                	if(redirectChecking[v][itr.first] == 1) ans += itr.second;
                	DFSUntil1(itr.first, visited);
                }
            }
        }
 
        void DFS(int t) {
        	bool visited[101][101];
        	for (int i = 0; i < n; ++i)
        		for (int j = 0; j < n; ++j)
        			visited[i][j] = 0;
        	int m;
        	ans = 0; dfs_for_1 = 0;
        	DFSUntil1(0, visited);
        	m = ans;
  			ans = 0;
  			dfs_for_1 = 2;
        	DFSUntil1(0, visited);
        	cout << "Case " << t << ": " << min(ans,m) << "\n";
        	
        }
};