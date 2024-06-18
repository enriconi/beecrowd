#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, aux = 0, ans = 0;
  cin >> a;
  while (cin >> b && b <= a);
  for (int i = a; i <= b; i++) {
    if (aux <= b) {
      aux += i;
      ans++;
    }
  }

  cout << ans << endl;

  return 0;
}