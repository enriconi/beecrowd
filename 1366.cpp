#include <iostream>

using namespace std;

int main()
{
  int n;

  while (cin >> n && n != 0) {
    int aux = 0;
    
    for (int i = 0; i < n; i++) {
      int a, b;

      cin >> a >> b;

      aux += (b / 2);
    }
    
    cout << (aux / 2) << endl;
  }
  
  return 0;
}