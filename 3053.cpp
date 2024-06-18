#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, a;
  char pA = 'A', pB = 'B', pC = 'C';
  char c;
  cin >> n;
  cin >> c;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == 1) swap(pA, pB);
    if (a == 2) swap(pB, pC);
    if (a == 3) swap(pC, pA);
  }

  if (c == pA) cout << 'A' << endl;
  if (c == pB) cout << 'B' << endl;
  if (c == pC) cout << 'C' << endl;

  return 0;
}