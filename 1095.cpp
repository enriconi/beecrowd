#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for (int j = 60, i = 1; j >= 0; j -= 5, i += 3) {
    cout << "I=" << i << " J=" << j << endl;
  }

  return 0;
}