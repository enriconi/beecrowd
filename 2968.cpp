#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  float aux;

  cin >> a >> b;

  for (int i = 1; i <= 9; i++) {
    aux = (a * b * i) / (float) 10;
    if (i != 9) cout << (int) ceil(aux) << " ";
    else cout << (int) ceil(aux) << endl;
  }
  
  return 0;
}