#include <iostream>

using namespace std;

int main()
{
  int v, n, a;

  cin >> v >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;

    v += a;

    if (v >= 100) v = 100;
    else if (v <= 0) v = 0;
  }

  cout << v << endl;
  
  return 0;
}