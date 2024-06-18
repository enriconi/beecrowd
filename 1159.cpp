#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  while (cin >> n && n) {
    int aux = 1, ans = 0;
    while (aux <= 5) {
      if (n % 2 == 0) {
        ans += n;
        aux++;
      }
      n++;
    }
    cout << ans << endl;
  }

  return 0;
}