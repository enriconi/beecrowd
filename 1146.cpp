#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    for (int i = 1; i <= n; i++) {
      if (n != i) cout << i << " ";
      else cout << i << endl;
    }
  }
  
  return 0;
}