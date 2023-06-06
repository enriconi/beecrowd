#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false); cin.tie(NULL);

  int n, mN = 0;

  cin >> n;

  int dS = 0, dP = 0;
  int sumL[n], sumC[n];

  memset(sumL, 0, sizeof(sumL));
  memset(sumC, 0, sizeof(sumC));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int num;
      cin >> num;

      mN = max(num, mN);
      if (i == j) dP += num;
      if ((i + j) == n - 1) dS += num;

      sumL[i] += num;
      sumC[j] += num;
    }
  }

  if (dS != dP || mN != (n * n)) {
    cout << 0 << endl;
    return 0;
  }

  for (int i = 0; i < n; i++) {
    if (sumL[i] != dP || sumC[i] != dS) {
      cout << 0 << endl;
      return 0;
    }
  }

  cout << dP << endl;

  return 0;
}