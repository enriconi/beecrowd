#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, odd = 0;
  cin >> n;
  while (odd < 6) {
    if (n % 2 != 0) {
      cout << n << endl;
      odd++;
    }
    n++;
  }

  return 0;
}