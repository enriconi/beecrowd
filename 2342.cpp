#include <bits/stdc++.h>

using namespace std;

#define MAXN 50010
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, c;
  char o;
  cin >> a >> b >> o >> c;
  if (o == '*') cout << ((a < b * c) ? "OVERFLOW" : "OK") << endl;
  else cout << ((a < b + c) ? "OVERFLOW" : "OK") << endl;

  return 0;
}