#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a;
  cin >> a;
  if (a <= 800) cout << 1 << endl;
  else if (a <= 1400) cout << 2 << endl;
  else cout << 3 << endl;

  return 0;
}