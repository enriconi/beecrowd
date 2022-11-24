#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, a, par = 0, impar = 0;;

  cin >> n;
  
  int i[n], p[n];

  for (int j = 0; j < n; j++) {
    cin >> a;

    if (a % 2 == 0) {
      p[par] = a;
      par++;
    } else if (a % 2 != 0) {
      i[impar] = a;
      impar++;
    }
  }

  sort(i, i + impar, greater<int>());
  sort(p, p + par);

  for (int k = 0; k < par; k++) {
    cout << p[k] << endl;
  }

  for (int l = 0; l < impar; l++) {
    cout << i[l] << endl;
  }
  
  return 0;
}