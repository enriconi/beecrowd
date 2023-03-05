#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    int a, b, wA = 0, wB = 0;

    for (int i = 0; i < n; i++) {
      cin >> a >> b;
      if (a > b) wA++;
      else if (b > a) wB++;
    }

    cout << wA << " " << wB << endl;
  }
  
  return 0;
}