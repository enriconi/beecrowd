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
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b, aux = 1, ans = 0;
    cin >> a >> b;
    while (aux <= b) {
      if (a % 2 != 0) {
        ans += a;
        aux++;
      }
      a++;
    }
    cout << ans << endl;
  }

  return 0;
}