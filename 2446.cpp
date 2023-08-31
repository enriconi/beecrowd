#include <bits/stdc++.h>

using namespace std;

#define MAXN 100010
#define MAXW 1010

int v, nM;
int moedas[MAXW];
bool dp[MAXN];

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  memset(moedas, 0, sizeof(moedas));
  cin >> v >> nM;
  for (int i = 0; i < nM; i++) cin >> moedas[i];
  dp[0] = true;

  for (int i = 0; i < nM; i++) {
    for (int j = v - moedas[i]; j >= 0; j--) {
      if (dp[j]) dp[j + moedas[i]] = true;
    }
  }

  if (dp[v]) cout << 'S' << '\n';
  else cout << 'N' << '\n';
  
  return 0;
}