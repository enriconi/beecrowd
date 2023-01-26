#include <iostream>

using namespace std;

int main()
{
  int n;

  cin >> n;

  for (int i = 0; i < n; i++) {
    int a, perfect = 0;

    cin >> a;

    for (int j = 1; j < a; j++) {
      if (a % j == 0) {
        perfect += j;
        if (perfect > a) break;
      }
    }

    if (perfect == a) cout << a << " eh perfeito" << endl;
    else cout << a << " nao eh perfeito" << endl;
  }
  
  return 0;
}