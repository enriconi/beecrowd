#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, m;

  while (cin >> n >> m && (n != 0 && m != 0)) {
    int reservasB[n + 1];
    int bD, bC, v;
    bool liq = true;
    for (int i = 1; i <= n; i++) cin >> reservasB[i];
    for (int i = 1; i <= m; i++) {
      cin >> bD >> bC >> v;
      reservasB[bD] -= v;
      reservasB[bC] += v;
    }

    for (int i = 1; i <= n; i++) {
      if (reservasB[i] < 0) {
        liq = false;
        break;
      }
    }

    cout << (liq ? 'S' : 'N') << endl;
  }

  return 0;
}