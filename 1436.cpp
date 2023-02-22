#include <iostream>

using namespace std;

int main()
{
  int n, m, p;

  cin >> n;

  for (int i = 1; i <= n; i++) {
    cin >> m;
    for (int j = 0; j < m; j++) {
      cin >> p;
      if (j == (int) m / 2) cout << "Case " << i << ": " << p << endl; 
    }
  }

  return 0;
}