#include <iostream>

using namespace std;

int main()
{
  int n, maior = -1, pos;

  for (int i = 1; i <= 100; i++) {
    cin >> n;

    if (n > maior) {
      maior = n;
      pos = i;
    }
  }

  cout << maior << endl;
  cout << pos << endl;
  
  return 0;
}