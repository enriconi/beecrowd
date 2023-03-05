#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int a, b;

  while (cin >> a >> b) {
    if (a > b) swap(b, a);
    cout << ((a == b) ? 0 : (b - a - 1)) << endl;
  }
  
  return 0;
}