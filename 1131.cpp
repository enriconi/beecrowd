#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n = 1;
  int inter = 0, gremio = 0, grenais = 0;
  do {
    int a, b;
    if (n == 2) break;
    cin >> a >> b;
    grenais++;
    if (a > b) inter++;
    else if (b > a) gremio++;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
  } while (cin >> n);

  cout << grenais << " grenais" << endl;
  cout << "Inter:" << inter << endl;
  cout << "Gremio:" << gremio << endl;
  cout << "Empates:" << (grenais - inter - gremio) << endl;
  cout << ((gremio > inter) ? "Gremio venceu mais" 
            : (gremio == inter) ? "Não houve vencedor" 
            : "Inter venceu mais") << endl;

  return 0;
}