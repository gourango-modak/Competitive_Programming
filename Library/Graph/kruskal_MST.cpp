

// for store weight and vertices (w, (u,v))
pair<int, pii> graph[1000];


ll MST(std::pair<int, pii> g[], int noOfEdges) {
	ll minimumCost = 0;
	fo(0, noOfEdges) {
		int u = g[i].second.first;
		int v = g[i].second.second;
		if(find(u) != find(v)) {
			minimumCost += g[i].first;
			union_Set(u,v);
		}
	}
	return minimumCost;
}
