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
  for (int i = 0; i < n; i++) 
    cout << (1 + i * 4) << ' ' << (2 + i * 4) << ' ' << (3 + i * 4) << " PUM" << endl;

  return 0;
}