#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 1; i <= 9; i += 2) {
    cout << "I=" << i << " J=" << 6 + i << endl;
    cout << "I=" << i << " J=" << 5 + i << endl;
    cout << "I=" << i << " J=" << 4 + i << endl;
  }

  return 0;
}