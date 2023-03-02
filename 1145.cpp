#include <iostream>

using namespace std;

int main()
{
  int n, m;
  int aux = 1;

  cin >> n >> m;

  for (int i = 1; i <= m; i += n) {
    for (int j = 1; j <= n; j++) {
      if (aux <= m) {
        if (j == n) cout << aux << endl;
        else cout << aux << " ";
        aux++;
      }
    }
  }
  
  return 0;
}