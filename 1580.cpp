#include <bits/stdc++.h>

using namespace std;

#define MAXN 1123
#define P 1000000007
#define EPS 1e-9
#define endl '\n'

typedef long long ll;

const int INF = 1000000010;

ll fpow(int a, int e) {
  if (e == 0) return 1;
  if (e & 1) return (a * fpow(a, e - 1)) % P;
  ll b = fpow(a, e / 2);
  return (b * b) % P;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  char s[MAXN];
  int n, freq[26];
  ll fact[MAXN], a, b;
  fact[0] = 1;
  for (int i = 1; i < MAXN; i++) fact[i] = (fact[i - 1] * i) % P;

  while (cin >> s) {
    n = strlen(s);
    memset(freq, 0, sizeof(freq));
    for (int i = 0; i < n; i++) freq[s[i] - 'A']++;
    a = fact[n];
    b = 1;
    for (int i = 0; i < 26; i++) {
      b *= fact[freq[i]];
      b %= P;
    }
    b = fpow(b, P - 2);
    cout << (a * b) % P << endl;
  }
  return 0;
}