#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, n, ans = 0;
  cin >> a;
  while (cin >> n && n <= 0);
  for (int i = 0; i < n; i++) ans += (a + i);
  cout << ans << endl;
  return 0;
}