#include <iostream>
using namespace std;

int main()
{
  int a, n, aux = 0, aux1 = 0;

  while (cin >> a && a != 0) {    

  for (int i = 0; i < a; i++) {
    cin >> n;
    if (n == 0) aux++;
    if (n == 1) aux1++;
  }

  cout << "Mary won " << aux << " times and John won " << aux1 << " times" << endl;
    
  aux = 0;
  aux1 = 0;
  }
  
  return 0;
}