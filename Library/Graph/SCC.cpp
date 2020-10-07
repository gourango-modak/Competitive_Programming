


list<int> graph[MAX];
list<int> rev_graph[MAX];
list<int> components[MAX];
int components_id[MAX];


void DFSUntil1(int v, bool visited[], stack<int> &st) {
    if(visited[v] == false) {
        visited[v] = 1;
        for(auto itr: graph[v]) {
            if(visited[itr] == 0) {
                DFSUntil1(itr, visited, st);
            }
        }
    }
    st.push(v);
}

void DFSUntil2(int v, bool visited[], int com_id) {
    if(visited[v] == false) {
        visited[v] = 1;
        components_id[v] = com_id;
        components[com_id].push_back(v);
        for(auto itr: rev_graph[v]) {
            if(visited[itr] == 0) {
                DFSUntil2(itr, visited, com_id);
            }
        }
    }
}


void SCC() {
    stack<int> st;
    bool visited[MAX];
    memset(visited, false, sizeof visited);
    fo(1, n+1) {
        if(visited[i] == false) {
            DFSUntil1(i, visited, st);
        }
    }

    memset(visited, false, sizeof visited);
    int com_id = 1;
    while(!st.empty()) {
        int v = st.top();
        st.pop();
        if(visited[v] == 0) {
            DFSUntil2(v, visited, com_id);
            com_id++;
        }
    }

    fo(1, com_id) {
        cout << i << " -- > ";
        for(auto ele: components[i]) cout << ele << " ";
            cout << "\n";
    }
}