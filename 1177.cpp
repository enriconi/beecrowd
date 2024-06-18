#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define EPS 1e-9
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int n, aux = 0;
  cin >> n;
  for (int i = 0; i < 1000; i++) {
    if (aux == n) aux = 0; 
    cout << "N[" << i << "] = " << aux++ << endl;
  }
  
  return 0;
}