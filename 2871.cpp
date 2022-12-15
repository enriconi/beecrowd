#include <iostream>

using namespace std;

int main()
{
  int c, l, sum = 0;

  while (cin >> c >> l) {  
    int m[c][l];
  
    for (int i = 0; i < c; i++) {
      for (int j = 0; j < l; j++) {
        cin >> m[i][j];
        sum += m[i][j];
      }
    }
  
    cout << (sum / 60) << " saca(s) e " << (sum % 60) << " litro(s)" << endl;

    sum = 0;
  }

  return 0;
}