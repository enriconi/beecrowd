#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int nS, nC, aux = 200, p;

    cin >> nS >> nC;

    for (int j = 1; j <= nS; j++) {
      int a, auxSwap = nC;
      
      cin >> a;

      if (a > auxSwap) swap(auxSwap, a);

      if ((auxSwap - a) < aux) {
        aux = (auxSwap - a);
        p = j;
      }
    }

    cout << p << endl;
  }

  return 0;
}