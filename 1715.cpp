#include <iostream>

using namespace std;

int main()
{
  int j, p, n, count = 0;
  bool aux;

  cin >> j >> p;

  for (int i = 0; i < j; i++) {
    aux = true;
    for (int j = 0; j < p; j++) {
      cin >> n;
      if (n == 0) aux = false;
    }
    if (aux) count++;
  }

  cout << count << endl;
  
  return 0;
}