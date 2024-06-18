#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int gcd(int x, int y) {
  if (y == 0) return x;
  return gcd(y, x % y);
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int x, y, z;
  while (cin >> x >> y >> z) {
    if (x > y) swap(x, y);
    if (y > z) swap(y, z);

    if ((z * z) != (x * x) + (y * y)) cout << "tripla" << endl;
    else if (gcd(x, gcd(y, z)) != 1) cout << "tripla pitagorica" << endl;
    else if (gcd(x, gcd(y, z)) == 1) cout << "tripla pitagorica primitiva" << endl;
  }
  
  return 0;
}