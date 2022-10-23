#include <iostream>

using namespace std;

int main()
{
  int n, a, b = 0, aux = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a != b) aux++;
    b = a;
  }

  cout << aux << endl;
  
  return 0;
}