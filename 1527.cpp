#include <iostream>

using namespace std;

const int MAXN = 1e5 + 1;

int p[MAXN], tam[MAXN], pontos[MAXN];

int find(int valor) {
  if (p[valor] == valor) return valor;
  return p[valor] = find(p[valor]);
}

void merge(int i, int j) {
  i = find(i), j = find(j);

  if (i == j) return;

  if (tam[i] >= tam[j]) {
    p[j] = i;
    tam[i] += tam[j];
    pontos[i] += pontos[j];
  } else {
    p[i] = j;
    tam[j] += tam[i];
    pontos[j] += pontos[i];
  }
}

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, m, q, a, b;

  while (cin >> n >> m && (n + m != 0)) {
    int ans = 0;
    
    for (int i = 1; i <= n; i++) {
      cin >> pontos[i];
      tam[i] = 1;
      p[i] = i;
    }
  
    for (int i = 1; i <= m; i++) {
      cin >> q >> a >> b;
  
      if (q == 1) merge(a, b);
      if (q == 2) {
        a = find(a), b = find(b);
        if (a == find(1) && pontos[a] > pontos[b]) ans++;
        if (b == find(1) && pontos[b] > pontos[a]) ans++;
      }
    }

    cout << ans << endl;
  }

  return 0;
}