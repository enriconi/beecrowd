#include <iostream>

using namespace std;

int main()
{
  int n, d;

  while (cin >> n >> d && (n != 0 && d != 0)) {
    bool check = true, aux = false;
    int m[d][n];

    for (int i = 0; i < d; i++) {
      for (int j = 0; j < n; j++) {
        cin >> m[i][j];
      }
    }

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < d; j++) {
        if (m[j][i] == 0) check = false;
      }
      if (check) aux = true;
      check = true;
    }
  
    if (aux) cout << "yes" << endl;
    else cout << "no" << endl; 
  }
  
  return 0;
}