#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, sum = 0;
  double aux = 0;
  while (cin >> n && n > 0) {
    sum += n;
    aux++;
  }
  cout << setprecision(2) << fixed << (sum / aux) << endl;

  return 0;
}