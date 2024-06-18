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
  for (int i = 1; i <= n; i++) {
    cout << i << ' ' << (i * i) << ' ' << (i * i * i) << endl;
    cout << i << ' ' << (1 + (i * i)) << ' ' << (1 + (i * i * i)) << endl;
  }

  return 0;
}