#include <iostream>

using namespace std;

const int MAXN = 1e5 + 1;

int p[MAXN], tam[MAXN];

int find(int valor) {
  if (p[valor] == valor) return valor;
  return p[valor] = find(p[valor]);
}

void merge (int i, int j) {
  i = find(i);
  j = find(j);

  if (i == j) return;

  if (tam[i] >= tam[j]) {
    p[j] = i;
    tam[i] += tam[j];
  } else {
    p[i] = j;
    tam[j] += tam[i];
  }
}

int main()
{
  // I/O mais rápido :)
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  
  int n, k, bA, bB;
  char c;

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    tam[i] = 1;
    p[i] = i;
  }

  for (int i = 0; i < k; i++) {
    cin >> c >> bA >> bB;

    if (c == 'F') merge(bA, bB);

    if (c == 'C') {
      if (find(bA) == find(bB)) cout << 'S' << endl;
      else cout << 'N' << endl;
    }
  }
  
  return 0;
}