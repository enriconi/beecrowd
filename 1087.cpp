#include <iostream>

using namespace std;

int main()
{
  int xA, xB, yA, yB;

  while (cin >> xA >> yA >> xB >> yB && ((xA + yA + xB + yB) != 0)) {
    if (xA == xB && yA == yB) cout << 0 << endl;
    else if (xA == xB || yA == yB || (abs(xA - xB) == abs(yA - yB))) cout << 1 << endl;
    else cout << 2 << endl;
  }
  
  return 0;
}