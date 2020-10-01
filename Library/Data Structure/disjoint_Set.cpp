


vi parrent_Arr(101, -1);

int find(int x) {
	if(parrent_Arr[x] == -1) return x;
	parrent_Arr[x] = find(parrent_Arr[x]);
	return parrent_Arr[x];
}

void union_Set(int x, int y) {

	int p_x = find(x);
	int p_y = find(y);

	if(p_x != p_y) {
		parrent_Arr[p_y] = p_x;
	}
}

int noOfComponents() {
	set<int> st;
	fo(1, n) {
		st.insert(find(i));
	}
	return st.size();
}