#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, aux = 0;
  for (int i = 0; i < 5; i++) {
    cin >> n;
    if (n % 2 == 0) aux++;
  }
  cout << aux << " valores pares" << endl;

  return 0;
}