#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  double x, y;
  int aux1, aux2;
  cin >> x >> y;

  aux1 = (x * y) + ((y - 1) * (x - 1));  
  aux2 = (x - 1) * 2 + (y - 1) * 2;

  cout << aux1 << endl;
  cout << aux2 << endl;

  return 0;
}