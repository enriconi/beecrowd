#include <bits/stdc++.h>

using namespace std;

#define MAXN 100010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

vector<int> l[MAXN];
bool visited[MAXN];

void dfs(int current) {
  visited[current] = true;
  for (int i = 0; i < l[current].size(); i++) {
    int neighbour = l[current][i];
    if (!visited[neighbour]) dfs(neighbour);
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= m; i++) {
    int u, v;
    cin >> u >> v;
    l[u].push_back(v);
    l[v].push_back(u);
  }

  int ans = 0;
  for (int i = 1; i <= n; i++) {
    if (!visited[i]) {
      ans++;
      dfs(i);
    }
  }

  cout << ans << endl;

  return 0;
}