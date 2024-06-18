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
  cin >> a >> b;
  int rest = a % b;
  for (int i = 0; i < b; i++) {
    if (rest > 0) cout << (a / b) + 1 << endl;
    else cout << (a / b) << endl;
    rest--;
  }
  return 0;
}