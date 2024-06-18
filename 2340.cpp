#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, d, c, pos;
  double aux = 0.0, min = 0.0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> d >> c;
    aux = c * log(d);
    if (aux > min) {
      min = c * log(d);
      pos = i;
    }
  }
  cout << pos << endl;

  return 0;
}