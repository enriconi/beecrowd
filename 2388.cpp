#include <iostream>
using namespace std;

int main()
{
  int n, a, b, aux = 0;

  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    aux += (a * b);
  }

  cout << aux << endl;
  
  return 0;
}