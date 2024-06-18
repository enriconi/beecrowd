#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b;
  cin >> a >> b;
  int aux = a;
  a = min(a, b);
  b = max(aux, b);
  if (a <= 8 && b > 8) cout << "final" << endl;
  else if (a <= 4 && b > 4 || a <= 12 && b > 12) cout << "semifinal" << endl;
  else if (b - a == 1 && b % 2 != 0 || b - a >= 2) cout << "quartas" << endl;
  else cout << "oitavas" << endl;

  return 0;
}