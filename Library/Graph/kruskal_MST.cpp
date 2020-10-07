

// for store weight and vertices (w, (u,v))
pair<int, pii> graph[1000];


ll MST(int noOfEdges) {
	ll minimumCost = 0;
	fo(0, noOfEdges) {
		int u = graph[i].second.first;
		int v = graph[i].second.second;
		if(find(u) != find(v)) {
			minimumCost += graph[i].first;
			union_Set(u,v);
		}
	}
	return minimumCost;
}
