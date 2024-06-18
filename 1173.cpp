#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define EPS 1e-9
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n;
  cin >> n;
  for (int i = 0; i < 10; i++) {
    cout << "N[" << i << "] = " << n << endl;
    n += n;
  }
  
  return 0;
}