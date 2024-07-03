#include <bits/stdc++.h>

using namespace std;

#define MAXN 112345
#define EPS 1e-9
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

ll x, y;
int p[MAXN], pi;

int sieve(int n) {
  if (n % 2 == 0) return 2;
  p[0] = 2; pi = 1;
  for (int i = 3;; i++) {
    int r = sqrt(i), prime = 1;
    for (int j = 0; j < pi && prime && p[j] <= r; j++) prime &= i % p[j] != 0;
    if (prime) {
      p[pi++] = i;
      if (n % i == 0) return i;
    }
  }
}

ll euclid(ll a, ll b) {
  if (b == 0) {
    x = 1; y = 0; return a;
  }
  ll d = euclid(b, a % b);
  ll temp = x;
  x = y;
  y = temp - y * (a / b);
  return d;
}

ll expbin(ll a, ll b, ll n) {
  if (b == 0) return 1;
  if (b & 1) return (a * expbin(a, b - 1, n)) % n;
  ll c = expbin(a, b / 2, n);
  return (c * c) % n;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  ll n, e, c;
  cin >> n >> e >> c;
  ll p = sieve(n), q = (n / p), phi = (p - 1) * (q - 1);
  euclid(e, phi);
  ll d = ((x % phi) + phi) % phi;
  cout << expbin(c, d, n) << endl;

  return 0;
}