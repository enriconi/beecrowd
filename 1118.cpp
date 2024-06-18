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
  do {
    if (n != 1 && n != 2) cout << "novo calculo (1-sim 2-nao)" << endl;
    if (n == 2) break;
    if (n == 1) {
      int aux = 0;
      double ans = 0;
      while (aux < 2) {
        double a;
        cin >> a;
        if (a >= 0 && a <= 10) {
          aux++;
          ans += a;
        } else {
          cout << "nota invalida" << endl;
        }
      }
      cout << setprecision(2) << fixed << "media = " << (ans / 2) << endl;
      cout << "novo calculo (1-sim 2-nao)" << endl;
    }
  } while (cin >> n);

  return 0;
}