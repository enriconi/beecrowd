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
  while (cin >> a >> b && (a != 0 && b != 0)) {
    if (a > 0 && b > 0) cout << "primeiro" << endl;
    if (a < 0 && b > 0) cout << "segundo" << endl;
    if (a < 0 && b < 0) cout << "terceiro" << endl;
    if (a > 0 && b < 0) cout << "quarto" << endl;
  }

  return 0;
}