#include <iostream>

using namespace std;

int main()
{
  int n, aux = 0;

  while (cin >> n) {
    for (int i = 2; i <= n; i *= 2) aux++;
    
    cout << aux << endl;
    aux = 0;
  }
  
  return 0;
}